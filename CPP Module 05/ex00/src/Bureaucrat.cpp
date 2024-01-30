/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:59 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/30 13:05:42 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaurat.hpp>

class	Bureaucrat::GradeTooHighException{
	public:
		std::string what() const{
			return "Grade too high. Number cannot be lower than 1.\n";
		}
};

class	Bureaucrat::GradeTooLowException{
	public:
		std::string what() const{
			return "Grade too low. Number cannot exceed 150.\n";
		}
};

Bureaucrat::Bureaucrat(std::string name, int grade) try: 
	_name(name), _grade(grade < 1 ? throw GradeTooHighException() : grade
		&& grade > 150 ? throw GradeTooLowException() : grade){
}
catch (GradeTooLowException const& e){
	std::cout << e.what() << std::endl;
}
catch (GradeTooHighException const& e){
	std::cout << e.what() << std::endl;
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

