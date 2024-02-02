/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:59 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/02 17:30:18 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaurat.hpp>

class	Bureaucrat::GradeTooHighException : public std::exception{
	public:
		const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Bureaucrat exception: Grade too high.";
		}
};

class	Bureaucrat::GradeTooLowException : public std::exception{
	public:
		const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Bureaucrat exception: Grade too low.";
		}
};

Bureaucrat::Bureaucrat(): _name("Cog in the Machine"), _grade(150){
}

Bureaucrat::Bureaucrat(std::string name) :_name(name), _grade(150){
}

Bureaucrat::Bureaucrat(int grade) try: _name("Wage Slave"),
	_grade(grade < 1 ? throw GradeTooHighException() : grade
		&& grade > 150 ? throw GradeTooLowException() : grade){
}
catch (std::exception const& e){
	std::cout << e.what() << std::endl;
}
catch(...){
	std::cout << "Unhandled exception" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) try: 
	_name(name), _grade(grade < 1 ? throw GradeTooHighException() : grade
		&& grade > 150 ? throw GradeTooLowException() : grade){
}
catch (std::exception const& e){
	std::cout << e.what() << std::endl;
}
catch(...){
	std::cout << "Unhandled exception" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) try: 
	_name(src.getName()), _grade(src.getGrade() < 1 ? throw GradeTooHighException() : src.getGrade()
		&& src.getGrade() > 150 ? throw GradeTooLowException() : src.getGrade()){
}
catch (std::exception const& e){
	std::cout << e.what() << std::endl;
}
catch(...){
	std::cout << "Unhandled exception" << std::endl;
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat	Bureaucrat::operator=(const Bureaucrat &src){
	return src;
}

std::string	Bureaucrat::getName() const{
	return _name;
}

int	Bureaucrat::getGrade() const{
	return _grade;
}

void	Bureaucrat::incementGrade(){
	try{
		if (_grade == 1)
			throw GradeTooHighException();
		else
			_grade--;
	}
	catch(std::exception const& e){
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(){
	try{
		if (_grade == 150)
			throw GradeTooLowException();
		else
			_grade++;
	}
	catch(std::exception const& e){
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(const AForm &form) const{
	if (!form.getSigned())
		std::cout << _name << " couln't sign form " << form.getName() << " because their grade was too low." << std::endl;
	else
		std::cout << _name << " could sign form " << form.getName() << std::endl;
}

void	Bureaucrat::executeForm(const AForm &form) const{
	if (_grade < form.getExecGrade())
		std::cout << _name << " executed " << form.getName() << std::endl;
	else
		std::cout << _name << " could not execute " << form.getName() << std::endl;
}

std::ostream & operator<< (std::ostream &out, const Bureaucrat& src){
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return out;
}

std::ostream & operator<< (std::ostream &out, const Bureaucrat* src){
	out << src->getName() << ", bureaucrat grade " << src->getGrade();
	return out;
}
