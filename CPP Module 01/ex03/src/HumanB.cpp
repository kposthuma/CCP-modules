/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:23:03 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/31 17:51:33 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<HumanB.hpp>

HumanB::HumanB(std::string name){
	setName(name); }

HumanB::~HumanB(){ }

void HumanB::setName(std::string name){
	_name = name; }

std::string HumanB::getName(){
	return _name; }

void HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon; }

Weapon HumanB::getWeapon(){
	return *_weapon; }

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
