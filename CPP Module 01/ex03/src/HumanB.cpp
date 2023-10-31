/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:23:03 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 18:51:54 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<HumanB.hpp>

HumanB::HumanB(std::string name)
{
	setName(name);
	// std::cout << "Creating a new Human B" << std::endl;
}

HumanB::~HumanB()
{
	// std::cout << "HumanB " << name << " has been killed!" << std::endl;
}

void HumanB::setName(std::string string)
{
	name = string;
}

std::string HumanB::getName()
{
	return name;
}

void HumanB::setWeapon(Weapon club)
{
	weapon = club;
}

Weapon HumanB::getWeapon()
{
	return weapon;
}

void HumanB::attack()
{
	std::string name = getName();
	Weapon weapon = getWeapon();
	std::string type = weapon.getType();
	if (type.length() != 0)
		std::cout << name << " attacks with their " << type << std::endl;
	else
		std::cout << name << " attacks with their bare fists" << std::endl;
}
