/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:15 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/04 13:42:35 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ScavTrap.hpp>

ScavTrap::ScavTrap(): ClapTrap("No name", 100, 50, 20){
	std::cout << "This is a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name, 100, 50, 20){
	std::cout << "This is a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(src){
	std::cout << "A copy of ScavTrap " << src.getName() << " has appeared" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "This was a ScavTrap" << std::endl;
}

void ScavTrap::operator=(const ScavTrap& src){
	std::cout << "A copy of ScavTrap " << src.getName() << " has appeared" << std::endl;
	_name = src.getName();
	_hp = src.getHP();
	_ep = src.getEP();
	_ad = src.getAD();
	_hpMax = src.getHPMax();
}

void ScavTrap::attack(const std::string& target){
	if (_ep > 0 && _hp > 0){
		std::cout << "Attack as a ScavTrap: ";
		ClapTrap::attack(target);
	}
	else if (_hp == 0)
		std::cout << "ScavTrap " << _name << " has no health left!" << std::endl;
	else if (_ep == 0)
		std::cout << "ScavTrap " << _name << " has no energy left!" << std::endl;
}

void ScavTrap::guardGate(){
	if (_hp > 0)
		std::cout << "ScavTrap " << getName() << " is now in gatekeeper mode"<< std::endl;
	else
		std::cout << "ScavTrap " << getName() << " has no health left!"<< std::endl;
}
