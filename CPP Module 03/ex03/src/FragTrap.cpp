/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 13:04:30 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<FragTrap.hpp>

FragTrap::FragTrap(): ClapTrap(){
	hp = 100;
	ep = 100;
	ad = 30;
	hp_max = 100;
	std::cout << "A FragTrap was born!" << std::endl;
}

FragTrap::FragTrap(const std::string _name): ClapTrap(_name){
	hp = 100;
	ep = 100;
	ad = 30;
	hp_max = 100;
	std::cout << "A FragTrap was born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fix){
	operator=(fix);
}

FragTrap::~FragTrap(){
	std::cout << "A FragTrap has passed away..." << std::endl;
}

void FragTrap::operator=(const FragTrap& op){
	std::cout << "A copy of FragTrap " << op.getName() << " has appeared" << std::endl;
	name = op.getName();
	hp = op.getHP();
	ep = op.getEP();
	ad = op.getAD();
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << name << " entusiastically offers you a high five!" << std::endl;
}

void FragTrap::attack(std::string target){
	ClapTrap::attack(target);
	std::cout << "this attack was performed through FragTrap" << std::endl;
}
