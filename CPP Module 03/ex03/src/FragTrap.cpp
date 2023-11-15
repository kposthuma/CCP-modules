/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/15 13:10:18 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<FragTrap.hpp>

FragTrap::FragTrap(std::string _name): ClapTrap(_name){
	std::cout << "A FragTrap was born!" << std::endl;
	fragHP();
	fragEP();
	fragAD();
}

FragTrap::~FragTrap(){
	std::cout << "A FragTrap passed away!" << std::endl;
}

void FragTrap::fragHP(){
	setHP(100);
	setHPmax(100);
}

void FragTrap::fragEP(){
	setEP(100);
}

void FragTrap::fragAD(){
	setAD(30);
}


void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << getName() << " entusiastically offers you a high five!" << std::endl;
}
