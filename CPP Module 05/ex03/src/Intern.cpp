/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 18:42:16 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 19:03:28 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

Intern::Intern(){
}

Intern::Intern(const Intern &src){
	*this = src;
}

Intern::~Intern(){
}

Intern Intern::operator=(const Intern &src){
	return src;
}

AForm	*Intern::makeForm(std::string type, std::string target){
	
}
