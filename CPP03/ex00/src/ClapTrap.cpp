/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/07 17:27:56 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/04 13:16:32 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ClapTrap.hpp>

ClapTrap::ClapTrap(): _name("no name"), _hp(10), _ep(10), _ad(0){
	std::cout << "A ClapTrap has appeared." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _ad(0){
	std::cout << "A ClapTrap called " << _name << " appeared." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src): _name(src.getName()), _hp(src.getHP()), _ep(src.getEP()), _ad(src.getAD()){	
	std::cout << "A copy of ClapTrap " << src.getName() << " has appeared." << std::endl;
}

void ClapTrap::operator=(const ClapTrap& src){
	std::cout << "ClapTrap " << src.getName() << " has been assigned to another." << std::endl;
	_name = src.getName();
	_hp = src.getHP();
	_ep = src.getEP();
	_ad = src.getAD();
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << _name << " died!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (_ep > 0 && _hp > 0){
		std::cout << "ClapTrap " << _name << " attacks " 
		<< target << " for " << _ad << " points of damage!" << std::endl;
		_ep--;
	}
	else if (_ep == 0)
		std::cout << "ClapTrap " << _name << " has no energy left!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has no health left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (amount > _hp)
		amount = _hp;
	if (_hp == 0)
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
	else {
		std::cout << "ClapTrap " << _name << " took " 
		<< amount << " points of damage!" << std::endl;
		_hp -= amount;
		if (_hp == 0)
			std::cout << "ClapTrap " << _name << " has no Hit points left!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_hp + amount > 10)
		amount = 10 - _hp;
	if (_ep > 0 && _hp > 0){
		std::cout << "ClapTrap " << _name << " repaired itself for " 
		<< amount << " points of health!" << std::endl;
		_ep--;
		_hp += amount;
	}
	else if (_ep == 0)
		std::cout << "ClapTrap " << _name << " has no energy left!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " has no health left!" << std::endl;
}

std::string ClapTrap::getName() const{
	return _name;
}

unsigned int ClapTrap::getHP() const{
	return _hp;
}

unsigned int ClapTrap::getEP() const{
	return _ep;
}

unsigned int ClapTrap::getAD() const{
	return _ad;
}
