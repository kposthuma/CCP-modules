/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:23:03 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/02 11:39:42 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<HumanA.hpp>

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{ setName(name); }

HumanA::~HumanA() {}

void HumanA::setName(std::string name){
	_name = name; }

std::string HumanA::getName(){
	return _name; }

void HumanA::setWeapon(Weapon weapon){
	_weapon = weapon; }

Weapon HumanA::getWeapon(){
	return _weapon; }

void HumanA::attack()
{
	std::string name = getName();
	Weapon weapon = getWeapon();
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
