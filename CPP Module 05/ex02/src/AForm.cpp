/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:59 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 14:41:49 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

class	AForm::GradeTooHighException : public std::exception{
	public:
		const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Form exception: Grade too high.";
		}
};

class	AForm::GradeTooLowException : public std::exception{
	public:
		const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Form exception: Grade too low.";
		}
};

AForm::AForm(): _name("Computer says no"), _signed(false), _signGrade(150), _execGrade(150){
}

AForm::AForm(std::string name) :_name(name), _signed(false), _signGrade(150), _execGrade(150){
}

AForm::AForm(std::string name, int signGrade, int execGrade) try: _name(name), _signed(false),
	_signGrade(signGrade < 1 ? throw GradeTooHighException() : signGrade
		&& signGrade > 150 ? throw GradeTooLowException() : signGrade),
	 _execGrade(execGrade < 1 ? throw GradeTooHighException() : execGrade
		&& execGrade > 150 ? throw GradeTooLowException() : execGrade){
}
catch (std::exception const& e){
	std::cout << e.what() << std::endl;
}
catch(...){
	std::cout << "Unhandled exception" << std::endl;
}

AForm::AForm(const AForm &src) try: _name(src.getName()), _signed(src.getSigned()),
	_signGrade(src.getSignGrade() < 1 ? throw GradeTooHighException() : src.getSignGrade()
		&& src.getSignGrade() > 150 ? throw GradeTooLowException() : src.getSignGrade()),
	 _execGrade(src.getExecGrade() < 1 ? throw GradeTooHighException() : src.getExecGrade()
		&& src.getExecGrade() > 150 ? throw GradeTooLowException() : src.getExecGrade()){
}
catch (std::exception const& e){
	std::cout << e.what() << std::endl;
}
catch(...){
	std::cout << "Unhandled exception" << std::endl;
}

AForm::~AForm(){
}

// AForm	AForm::operator=(const AForm &src){
// 	return src;
// }

std::string	AForm::getName() const{
	return _name;
}

bool	AForm::getSigned() const{
	return _signed;
}

int	AForm::getSignGrade() const{
	return _signGrade;
}

int	AForm::getExecGrade() const{
	return _execGrade;
}

void	AForm::beSigned(const Bureaucrat &bur){
	try{
		if (bur.getGrade() > _signGrade)
			throw GradeTooLowException();
		else
			_signed = true;
	}
	catch(std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	bur.signForm(*this);
}

bool	AForm::executeCheck(Bureaucrat const &executor) const{
	bool check = false;
	
	if (_signed){
		try{
			if (executor.getGrade() > _execGrade)
				throw GradeTooLowException();
			else
				check = true;
		}
		catch(std::exception const &e){
			std::cout << e.what() << std::endl;
		}
	}
	return check;
}

std::ostream	&operator<< (std::ostream &out, const AForm& src){
	out << src.getName() << ", Form sign grade " << src.getSignGrade()
	<< " and execute grade " << src.getExecGrade() << ", has ";
	if (!src.getSigned())
		out << "not ";
	out << "been signed";
	return out;
}

