/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:23:03 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/31 17:53:21 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<HumanA.hpp>

HumanA::HumanA(std::string name, Weapon &weapon){
	setWeapon(weapon);
	setName(name); }

HumanA::~HumanA() {}

void HumanA::setName(std::string name){
	_name = name; }

std::string HumanA::getName(){
	return _name; }

void HumanA::setWeapon(Weapon &weapon){
	_weapon = &weapon; }

Weapon HumanA::getWeapon(){
	return *_weapon; }

void HumanA::attack()
{
	std::string name = getName();
	Weapon weapon = getWeapon();
	std::string type = weapon.getType();
	std::cout << name << " attacks with their " << type << std::endl;
}
