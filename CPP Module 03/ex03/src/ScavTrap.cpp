/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:15 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/15 13:10:34 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ScavTrap.hpp>

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name){
	std::cout << "This is a SvavTrap" << std::endl;
	scavHP();
	scavEP();
	scavAD();
}

ScavTrap::~ScavTrap(){
	std::cout << "This was a ScavTrap" << std::endl;
}

void ScavTrap::scavHP(){
	setHP(100);
	setHPmax(100);
}

void ScavTrap::scavEP(){
	setEP(50);
}

void ScavTrap::scavAD(){
	setAD(20);
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << getName() << " is now in gatekeeper mode"<< std::endl;
}
