/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/31 10:34:46 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception> 
#include <typeinfo>
#include <Bureaurat.hpp>

class Bureaucrat;

class Form
{
	class	GradeTooHighException;
	class	GradeTooLowException;

	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
	public:
		Form();
		Form(std::string name);
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form &src);
		~Form();
		Form operator=(const Form &src);

		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		void		beSigned(const Bureaucrat &bur);
};

std::ostream & operator<< (std::ostream &out, const Form& src);

#endif
