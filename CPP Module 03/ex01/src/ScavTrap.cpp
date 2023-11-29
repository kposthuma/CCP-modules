/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:15 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/29 17:25:09 by kposthum      ########   odam.nl         */
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

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(){
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
	hpMax = src.getHPMax();
}

void ScavTrap::guardGate(){
	if (hp > 0)
		std::cout << "ScavTrap " << getName() << " is now in gatekeeper mode"<< std::endl;
	else
		std::cout << "ScavTrap " << getName() << " has no health left!"<< std::endl;
}
