/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 18:42:34 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 18:54:00 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include<string>
#include<AForm.hpp>

class	AForm;

class	Intern{
	private:

	public:
		AForm	*makeForm(std::string type, std::string target);
};

#endif
