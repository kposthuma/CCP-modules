/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:15 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/25 11:39:31 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ScavTrap.hpp>

ScavTrap::ScavTrap(): ClapTrap(){
	hp = 100;
	ep = 50;
	ad = 20;
	hpMax = 100;
	std::cout << "This is a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string _name): ClapTrap(_name){
	hp = 100;
	ep = 50;
	ad = 20;
	hpMax = 100;
	std::cout << "This is a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src){
	operator=(src);
}

ScavTrap::~ScavTrap(){
	std::cout << "This was a ScavTrap" << std::endl;
}

void ScavTrap::operator=(const ScavTrap& src){
	std::cout << "A copy of ScavTrap " << src.getName() << " has appeared" << std::endl;
	name = src.getName();
	hp = src.getHP();
	ep = src.getEP();
	ad = src.getAD();
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << getName() << " is now in gatekeeper mode"<< std::endl;
}

void ScavTrap::attack(std::string target){
	ClapTrap::attack(target);
	std::cout << "this attack was performed through ScavTrap" << std::endl;
}
