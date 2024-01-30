/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:59 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/30 17:00:12 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

class	Form::GradeTooHighException : public std::exception{
	public:
		const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Grade too high.";
		}
};

class	Form::GradeTooLowException : public std::exception{
	public:
		const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Grade too low.";
		}
};

Form::Form(): _name("Computer says no"), _signed(false), _signGrade(150), _execGrade(150){
}

Form::Form(std::string name) :_name(name), _signed(false), _signGrade(150), _execGrade(150){
}

Form::Form(int signGrade) try: _name("Form"), _signed(false),
	_signGrade(signGrade < 1 ? throw GradeTooHighException() : signGrade
		&& signGrade > 150 ? throw GradeTooLowException() : signGrade), _execGrade(150){
}
catch (std::exception const& e){
	std::cout << e.what() << std::endl;
}
catch(...){
	std::cout << "Unhandled exception" << std::endl;
}

Form::Form(int execGrade) try: _name("Computer says no"), _signed(false), _signGrade(150), 
	_execGrade(execGrade < 1 ? throw GradeTooHighException() : execGrade
		&& execGrade > 150 ? throw GradeTooLowException() : execGrade){
}
catch (std::exception const& e){
	std::cout << e.what() << std::endl;
}
catch(...){
	std::cout << "Unhandled exception" << std::endl;
}

Form::Form(std::string name, int signGrade) try: _name(name), _signed(false),
	_signGrade(signGrade < 1 ? throw GradeTooHighException() : signGrade
		&& signGrade > 150 ? throw GradeTooLowException() : signGrade), _execGrade(150){
}
catch (std::exception const& e){
	std::cout << e.what() << std::endl;
}
catch(...){
	std::cout << "Unhandled exception" << std::endl;
}

Form::Form(std::string name, int execGrade) try: _name(name), _signed(false), _signGrade(150),
	 _execGrade(execGrade < 1 ? throw GradeTooHighException() : execGrade
		&& execGrade > 150 ? throw GradeTooLowException() : execGrade){
}
catch (std::exception const& e){
	std::cout << e.what() << std::endl;
}
catch(...){
	std::cout << "Unhandled exception" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) try: _name(name), _signed(false),
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

Form::Form(const Form &src) try: _name(src.getName()), _signed(src.getSigned()),
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

Form::~Form(){
}

Form	Form::operator=(const Form &src){
	return src;
}

std::string	Form::getName() const{
	return _name;
}

bool	Form::getSigned() const{
	return _signed;
}

int	Form::getSignGrade() const{
	return _signGrade;
}

int	Form::getExecGrade() const{
	return _execGrade;
}

// void	Form::incementGrade(){
// 	try{
// 		if (_grade == 1)
// 			throw GradeTooHighException();
// 		else
// 			_grade--;
// 	}
// 	catch(std::exception const& e){
// 		std::cout << e.what() << std::endl;
// 	}
// }

// void	Form::decrementGrade(){
// 	try{
// 		if (_grade == 150)
// 			throw GradeTooLowException();
// 		else
// 			_grade++;
// 	}
// 	catch(std::exception const& e){
// 		std::cout << e.what() << std::endl;
// 	}
// }

std::ostream & operator<< (std::ostream &out, const Form& src){
	out << src.getName() << ", Form sign grade " << src.getSignGrade()
	<< "and execute grade" << src.getExecGrade() << ", has ";
	if (!src.getSigned())
		out << "not ";
	out << "been signed";
	return out;
}

