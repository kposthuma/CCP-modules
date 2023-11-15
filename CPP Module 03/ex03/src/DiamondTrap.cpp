/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:16:35 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/15 14:07:30 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<DiamondTrap.hpp>

DiamondTrap::DiamondTrap(std::string _name) : 
ClapTrap(_name + "_Clap_name"), ScavTrap(_name), FragTrap(_name),  name(_name){
	std::cout << "A DiamondTrap materialized out of thin air" << std::endl;
	fragHP();
	scavEP();
	fragAD();
	std::cout << "HP: " << getHP()
				<< "\nEP: " << getEP()
				<< "\nAD: " << getAD()
				<< "\nname: " << name
				<< std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "A DiamondTrap exploded!" << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << "This DiamondTrap's name is " << name 
				<< " and its Clapname is " << getName() << "." << std::endl;
}
