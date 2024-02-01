/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 14:36:16 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception> 
#include <typeinfo>
#include <Bureaurat.hpp>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
	public:
		class	GradeTooHighException;
		class	GradeTooLowException;
		AForm();
		AForm(std::string name);
		AForm(std::string name, int signGrade, int execGrade);
		AForm(const AForm &src);
		virtual ~AForm();
		// AForm operator=(const AForm &src);

		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		void	beSigned(const Bureaucrat &bur);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		bool	executeCheck(Bureaucrat const & executor) const;
};

std::ostream & operator<< (std::ostream &out, const AForm& src);

#endif
