/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:23:03 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 18:45:50 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<HumanA.hpp>

HumanA::HumanA(std::string name, Weapon weapon)
{
	setWeapon(weapon);
	setName(name);
	// std::cout << "Creating a new Human A" << std::endl;
}

HumanA::~HumanA()
{
	// std::cout << "HumanA " << name << " has been killed!" << std::endl;
}

void HumanA::setName(std::string string)
{
	name = string;
}

std::string HumanA::getName()
{
	return name;
}

void HumanA::setWeapon(Weapon club)
{
	weapon = club;
}

Weapon HumanA::getWeapon()
{
	return weapon;
}

void HumanA::attack()
{
	std::string name = getName();
	Weapon weapon = getWeapon();
	std::string type = weapon.getType();
	std::cout << name << " attacks with their " << type << std::endl;
}
