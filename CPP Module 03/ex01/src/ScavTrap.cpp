/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:15 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/08 17:06:10 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ScavTrap.cpp>

ScavTrap::ScavTrap(std::string _name){
	name = _name;
	setHP(100);
	setEP(50);
	setAD(20);
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << name << " is now in gatekeeper mode"<< std::endl;
}