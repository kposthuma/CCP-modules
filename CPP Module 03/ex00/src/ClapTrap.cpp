/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/07 17:27:56 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/25 11:35:41 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ClapTrap.hpp>

ClapTrap::ClapTrap(): hp(10), ep(10), ad(0){
	std::cout << "A ClapTrap has appeared." << std::endl;
}

ClapTrap::ClapTrap(std::string _name): name(_name), hp(10), ep(10), ad(0){
	std::cout << "A ClapTrap called " << name << " appeared." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src){
	operator=(src);
}

void ClapTrap::operator=(const ClapTrap& src){
	std::cout << "A copy of ClapTrap " << src.getName() << " has appeared" << std::endl;
	name = src.getName();
	hp = src.getHP();
	ep = src.getEP();
	ad = src.getAD();
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap died!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (ep > 0 && hp > 0){
		std::cout << "ClapTrap " << name << " attacks " 
		<< target << " for " << ad << " points of damage!" << std::endl;
		ep--;
	}
	else if (ep == 0)
		std::cout << "ClapTrap " << name << " has no energy left!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " has no health left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (amount > hp)
		amount = hp;
	if (hp == 0)
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
	else {
		std::cout << "ClapTrap " << name << " took " 
		<< amount << " points of damage!" << std::endl;
		hp -= amount;
		if (hp == 0)
			std::cout << "ClapTrap " << name << " has no Hit points left!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (hp + amount > 10)
		amount = 10 - hp;
	if (ep > 0 && hp > 0){
		std::cout << "ClapTrap " << name << " repaired itself for " 
		<< amount << " points of health!" << std::endl;
		ep--;
		hp += amount;
	}
	else if (ep == 0)
		std::cout << "ClapTrap " << name << " has no energy left!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " has no health left!" << std::endl;
}

std::string ClapTrap::getName() const{
	return name;
}

unsigned int ClapTrap::getHP() const{
	return hp;
}

unsigned int ClapTrap::getEP() const{
	return ep;
}

unsigned int ClapTrap::getAD() const{
	return ad;
}
