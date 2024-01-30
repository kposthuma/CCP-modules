/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:59 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/29 15:05:06 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaurat.hpp>

Bureaucrat::Bureaucrat(std::string name, int grade) try: 
	_name(name), _grade(grade < 1 ? throw (grade) : grade){
}
catch (int num){
	if (num < 1)
		GradeTooHighException();
	else
		GradeTooLowException();
}
catch (std::exception const& e){
	std::cout << e.what() << std::endl;
}
catch(...){
	std::cout << "Unhandled exception" << std::endl;
}

Bureaucrat::~Bureaucrat(){
}

std::string	Bureaucrat::getName() const{
	return _name;
}

int	Bureaucrat::getGrade() const{
	return _grade;
}

void	Bureaucrat::incementGrade(){
	try{
		_grade--;
		if (_grade < 1)
			throw(_grade);
	}
	catch(int _grade){
		GradeTooHighException();
	}
}

void	Bureaucrat::decrementGrade(){
	try{
		_grade++;
		if (_grade > 150)
			throw(_grade);
	}
	catch(int _grade){
		GradeTooLowException();
	}
}

std::ostream & operator<< (std::ostream &out, const Bureaucrat& src){
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return out;
}

std::string	Bureaucrat::GradeTooHighException(){
	return "Grade too high. Number cannot be lower than 1.\n";
}

std::string	Bureaucrat::GradeTooLowException(){
	return "Grade too low. Number cannot exceed 150.\n";
}
