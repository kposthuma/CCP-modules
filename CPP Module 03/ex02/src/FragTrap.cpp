/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/14 13:45:21 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<FragTrap.hpp>

FragTrap::FragTrap(std::string _name){
	setName(_name);
	setHP(100);
	setHPMax(100);
	setEP(100);
	setAD(30);
	std::cout << "A FragTrap was born!" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "A FragTrap passed away!" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << getName() << " entusiastically offers you a high five!" << std::endl;
}
