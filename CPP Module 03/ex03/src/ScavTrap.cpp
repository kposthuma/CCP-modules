/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:15 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 12:13:41 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ScavTrap.hpp>

ScavTrap::ScavTrap(): ClapTrap(){
	hp = 100;
	ep = 50;
	ad = 20;
	hp_max = 100;
	std::cout << "This is a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const std::string _name): ClapTrap(_name){
	hp = 100;
	ep = 50;
	ad = 20;
	hp_max = 100;
	std::cout << "This is a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &fix){
	operator=(fix);
}

ScavTrap::~ScavTrap(){
	std::cout << "This was a ScavTrap" << std::endl;
}

void ScavTrap::operator=(const ScavTrap& op){
	std::cout << "A copy of ScavTrap " << op.getName() << " has appeared" << std::endl;
	name = op.getName();
	hp = op.getHP();
	ep = op.getEP();
	ad = op.getAD();
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << getName() << " is now in gatekeeper mode"<< std::endl;
}
