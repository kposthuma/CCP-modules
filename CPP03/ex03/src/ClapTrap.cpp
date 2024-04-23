/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/07 17:27:56 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/04 13:44:55 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ClapTrap.hpp>

ClapTrap::ClapTrap(): _name("no name"), _hp(10), _ep(10), _ad(0), _hpMax(10){
	std::cout << "A ClapTrap has appeared." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _ep(10), _ad(0), _hpMax(10){
	std::cout << "A ClapTrap called " << name << " appeared." << std::endl;
}

ClapTrap::ClapTrap(const std::string name, unsigned int hp, unsigned int ep, unsigned int ad):
_name(name), _hp(hp), _ep(ep), _ad(ad), _hpMax(hp){
}

ClapTrap::ClapTrap(const ClapTrap& src):
_name(src.getName()), _hp(src.getHP()), _ep(src.getEP()), _ad(src.getAD()), _hpMax(src.getHPMax()){	
	std::cout << "A copy of ClapTrap " << src.getName() << " has appeared." << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap died!" << std::endl;
}

void ClapTrap::operator=(const ClapTrap& src){
	std::cout << "A copy of ClapTrap " << src.getName() << " has appeared" << std::endl;
	_name = src.getName();
	_hp = src.getHP();
	_ep = src.getEP();
	_ad = src.getAD();
}

void ClapTrap::attack(const std::string& target){
	if (_ep > 0 && _hp > 0){
		std::cout << "ClapTrap " << _name << " attacks " 
		<< target << " for " << _ad << " points of damage!" << std::endl;
		_ep--;
		std::cout << "Current energy: " << _ep << std::endl;
	}
	else if (_hp == 0)
		std::cout << "ClapTrap " << _name << " has no health left!" << std::endl;
	else if (_ep == 0)
		std::cout << "ClapTrap " << _name << " has no energy left!" << std::endl;
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
		std::cout << "Current health: " << _hp << std::endl;
		if (_hp == 0)
			std::cout << "ClapTrap " << _name << " has no Hit points left!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_hp + amount > _hpMax)
		amount = _hpMax - _hp;
	if (_ep > 0 && _hp > 0){
		std::cout << "ClapTrap " << _name << " repaired itself for " 
		<< amount << " points of health!" << std::endl;
		_ep--;
		_hp += amount;
		std::cout << "Current health: " << _hp << std::endl;
		std::cout << "Current energy: " << _ep << std::endl;
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

unsigned int ClapTrap::getHPMax() const{
	return _hpMax;
}

void ClapTrap::setName(const std::string name){
	_name = name;
}

void ClapTrap::setHP(const unsigned int hp){
	_hp = hp;
}

void ClapTrap::setEP(const unsigned int ep){
	_ep = ep;
}

void ClapTrap::setAD(const unsigned int ad){
	_ad = ad;
}

void ClapTrap::setHPMax(const unsigned int hp){
	_hpMax = hp;
}
