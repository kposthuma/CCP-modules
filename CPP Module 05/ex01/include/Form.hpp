/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/30 16:34:42 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception> 
#include <typeinfo>
#include <Bureaurat.hpp>

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
		Form(int signGrade);
		Form(int execGrade);
		Form(std::string name, int signGrade);
		Form(std::string name, int execGrade);
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form &src);
		~Form();
		Form operator=(const Form &src);

		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		// void		incementGrade();
		// void		decrementGrade();

};

std::ostream & operator<< (std::ostream &out, const Form& src);

#endif
