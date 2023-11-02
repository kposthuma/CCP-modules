/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:23:03 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/02 11:28:04 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<HumanB.hpp>

HumanB::HumanB(std::string name){
	setName(name);
	armed = false; }

HumanB::~HumanB(){ }

void HumanB::setName(std::string name){
	_name = name; }

std::string HumanB::getName(){
	return _name; }

void HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
	armed = true; }

Weapon HumanB::getWeapon(){
	return *_weapon; }

void HumanB::attack()
{
	std::string name = getName();
	if (armed == true)
		std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their bare fists" << std::endl;
}
