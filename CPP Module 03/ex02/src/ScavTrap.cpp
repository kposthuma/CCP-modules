/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:15 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/14 13:39:36 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ScavTrap.hpp>

ScavTrap::ScavTrap(std::string _name){
	setName(_name);
	setHP(100);
	setHPMax(100);
	setEP(50);
	setAD(20);
	std::cout << "This is a SvavTrap" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "This was a ScavTrap" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << getName() << " is now in gatekeeper mode"<< std::endl;
}
