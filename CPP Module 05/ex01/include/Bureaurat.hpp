/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaurat.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/31 10:35:06 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception> 
#include <typeinfo>
#include <Form.hpp>

class Form;

class Bureaucrat
{
	class	GradeTooHighException;
	class	GradeTooLowException;

	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(int grade);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();
		Bureaucrat operator=(const Bureaucrat &src);

		std::string	getName() const;
		int			getGrade() const;

		void		incementGrade();
		void		decrementGrade();
		void		signForm(const Form &form) const;
};

std::ostream & operator<< (std::ostream &out, const Bureaucrat& src);

#endif
