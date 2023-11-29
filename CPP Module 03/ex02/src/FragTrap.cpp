/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/29 17:23:27 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<FragTrap.hpp>

FragTrap::FragTrap(): ClapTrap(){
	hp = 100;
	ep = 100;
	ad = 30;
	hpMax = 100;
	std::cout << "A FragTrap was born!" << std::endl;
}

FragTrap::FragTrap(const std::string _name): ClapTrap(_name){
	hp = 100;
	ep = 100;
	ad = 30;
	hpMax = 100;
	std::cout << "A FragTrap was born!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src){
	operator=(src);
}

FragTrap::~FragTrap(){
	std::cout << "A FragTrap has passed away..." << std::endl;
}

void FragTrap::operator=(const FragTrap& src){
	std::cout << "A copy of FragTrap " << src.getName() << " has appeared" << std::endl;
	name = src.getName();
	hp = src.getHP();
	ep = src.getEP();
	ad = src.getAD();
}

void FragTrap::highFivesGuys(void){
	if (hp > 0)
		std::cout << "FragTrap " << name << " entusiastically offers you a high five!" << std::endl;
	else
		std::cout << "FragTrap " << getName() << " has no health left!"<< std::endl;
}
