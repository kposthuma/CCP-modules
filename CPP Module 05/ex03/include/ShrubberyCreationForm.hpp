/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 12:34:20 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 14:25:12 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include<AForm.hpp>
#include<fstream>

class ShrubberyCreationForm : public AForm{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm operator=(const ShrubberyCreationForm &src);

		std::string	getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif
