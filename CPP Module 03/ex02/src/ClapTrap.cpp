/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/07 17:27:56 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/25 11:39:31 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ClapTrap.hpp>

ClapTrap::ClapTrap(): name("no name"), hp(10), ep(10), ad(0), hpMax(10){
	std::cout << "A ClapTrap has appeared." << std::endl;
}

ClapTrap::ClapTrap(std::string _name): name(_name), hp(10), ep(10), ad(0){
	std::cout << "A ClapTrap called " << name << " appeared." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src){
	operator=(src);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap died!" << std::endl;
}

void ClapTrap::operator=(const ClapTrap& src){
	std::cout << "A copy of ClapTrap " << src.getName() << " has appeared" << std::endl;
	name = src.getName();
	hp = src.getHP();
	ep = src.getEP();
	ad = src.getAD();
}

void ClapTrap::attack(const std::string& target){
	if (ep > 0 && hp > 0){
		std::cout << "ClapTrap " << name << " attacks " 
		<< target << " for " << ad << " points of damage!" << std::endl;
		ep--;
		std::cout << "Current energy: " << ep << std::endl;
	}
	else if (hp == 0)
		std::cout << "ClapTrap " << name << " has no health left!" << std::endl;
	else if (ep == 0)
		std::cout << "ClapTrap " << name << " has no energy left!" << std::endl;
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
		std::cout << "Current health: " << hp << std::endl;
		if (hp == 0)
			std::cout << "ClapTrap " << name << " has no Hit points left!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (hp + amount > hpMax)
		amount = hpMax - hp;
	if (ep > 0 && hp > 0){
		std::cout << "ClapTrap " << name << " repaired itself for " 
		<< amount << " points of health!" << std::endl;
		ep--;
		hp += amount;
		std::cout << "Current health: " << hp << std::endl;
		std::cout << "Current energy: " << ep << std::endl;
	}
	else if (ep == 0)
		std::cout << "ClapTrap " << name << " has no energy left!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " has no health left!" << std::endl;
}

std::string ClapTrap::getName() const{
	return name;
}

int ClapTrap::getHP() const{
	return hp;
}

int ClapTrap::getEP() const{
	return ep;
}

int ClapTrap::getAD() const{
	return ad;
}

void ClapTrap::setName(const std::string _name){
	name = _name;
}

void ClapTrap::setHP(const unsigned int _hp){
	hp = _hp;
}

void ClapTrap::setEP(const unsigned int _ep){
	ep = _ep;
}

void ClapTrap::setAD(const unsigned int _ad){
	ad = _ad;
}

void ClapTrap::setHPMax(const unsigned int _hp){
	hpMax = _hp;
}
