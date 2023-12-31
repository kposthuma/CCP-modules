/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:15 by kposthum      #+#    #+#                 */
/*   Updated: 2023/12/09 14:14:36 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ScavTrap.hpp>

ScavTrap::ScavTrap(): ClapTrap(){
	ClapTrap::_hp = 100;
	ClapTrap::_ep = 50;
	ClapTrap::_ad = 20;
	ClapTrap::_hpMax = 100;
	std::cout << "This is a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name){
	ClapTrap::_hp = 100;
	ClapTrap::_ep = 50;
	ClapTrap::_ad = 20;
	ClapTrap::_hpMax = 100;
	std::cout << "This is a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(){
	operator=(src);
}

ScavTrap::~ScavTrap(){
	std::cout << "This was a ScavTrap" << std::endl;
}

void ScavTrap::operator=(const ScavTrap& src){
	std::cout << "A copy of ScavTrap " << src.getName() << " has appeared" << std::endl;
	_name = src.getName();
	ClapTrap::_hp = src.getHP();
	ClapTrap::_ep = src.getEP();
	ClapTrap::_ad = src.getAD();
	ClapTrap::_hpMax = src.getHPMax();
}

void ScavTrap::attack(std::string target){
	std::cout << "Attack as a ScavTrap: ";
	ClapTrap::attack(target);
}

void ScavTrap::guardGate(){
	if (ClapTrap::_hp > 0)
		std::cout << "ScavTrap " << getName() << " is now in gatekeeper mode"<< std::endl;
	else
		std::cout << "ScavTrap " << getName() << " has no health left!"<< std::endl;
}
