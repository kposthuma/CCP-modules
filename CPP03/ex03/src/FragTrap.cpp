/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:24 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/04 13:50:34 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<FragTrap.hpp>

FragTrap::FragTrap(): ClapTrap("No name", 100, 100, 30){
	std::cout << "A FragTrap was born!" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name, 100, 100, 30){
	std::cout << "A FragTrap was born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src): ClapTrap(src){
	std::cout << "A copy of FragTrap " << src.getName() << " has appeared" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "A FragTrap has passed away..." << std::endl;
}

void FragTrap::operator=(const FragTrap& src){
	std::cout << "A copy of FragTrap " << src.getName() << " has appeared" << std::endl;
	_name = src.getName();
	ClapTrap::_hp = src.getHP();
	ClapTrap::_ep = src.getEP();
	ClapTrap::_ad = src.getAD();
	ClapTrap::_hpMax = src.getHPMax();
}

void FragTrap::attack(std::string target){
	if (_ep > 0 && _hp > 0){
		std::cout << "Attack as a FragTrap: ";
		ClapTrap::attack(target);
	}
	else if (_hp == 0)
		std::cout << "ScavTrap " << _name << " has no health left!" << std::endl;
	else if (_ep == 0)
		std::cout << "ScavTrap " << _name << " has no energy left!" << std::endl;
}

void FragTrap::highFivesGuys(void){
	if (ClapTrap::_hp > 0)
		std::cout << "FragTrap " << _name << " entusiastically offers you a high five!" << std::endl;
	else
		std::cout << "FragTrap " << getName() << " has no health left!"<< std::endl;
}
