/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:11:18 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 18:44:23 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Weapon.hpp>

Weapon::Weapon(std::string type)
{
	setType(type);
	// std::cout << "Creating a new Weapon" << std::endl;
}

Weapon::~Weapon()
{
	// std::cout << "Weapon " << type << " has been destroyed!" << std::endl;
}
void Weapon::setType(std::string string)
{
	type = string;
}

std::string Weapon::getType(void)
{
	return type;
}

Weapon::Weapon(void)
{}
