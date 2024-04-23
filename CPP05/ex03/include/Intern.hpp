/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 18:42:34 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/02 14:58:51 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include<string>
#include<exception>
#include<AForm.hpp>
#include<ShrubberyCreationForm.hpp>
#include<RobotomyRequestForm.hpp>
#include<PresidentialPardonForm.hpp>

class	AForm;

class	Intern{

	class	NoSuchFormException;
	private:

	public:
		Intern();
		Intern(const Intern &src);
		~Intern();
		Intern operator=(const Intern &src);
		// AForm *presidentialPardon();
		// AForm *robotomyRequest();
		// AForm *shrubberyCreation();
		AForm	*makeForm(const std::string &type, const std::string &target);
};

#endif
