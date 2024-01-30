/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaurat.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/30 14:01:39 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception> 
#include <typeinfo>

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

};

std::ostream & operator<< (std::ostream &out, const Bureaucrat& src);

#endif
