/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/12/09 14:15:48 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<FragTrap.hpp>

FragTrap::FragTrap(): ClapTrap(){
	ClapTrap::_hp = 100;
	ClapTrap::_ep = 100;
	ClapTrap::_ad = 30;
	ClapTrap::_hpMax = 100;
	std::cout << "A FragTrap was born!" << std::endl;
}

FragTrap::FragTrap(const std::string name): ClapTrap(name){
	ClapTrap::_hp = 100;
	ClapTrap::_ep = 100;
	ClapTrap::_ad = 30;
	ClapTrap::_hpMax = 100;
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
	_name = src.getName();
	ClapTrap::_hp = src.getHP();
	ClapTrap::_ep = src.getEP();
	ClapTrap::_ad = src.getAD();
	ClapTrap::_hpMax = src.getHPMax();
}

void FragTrap::attack(std::string target){
	std::cout << "Attack as a FragTrap: ";
	ClapTrap::attack(target);
}

void FragTrap::highFivesGuys(void){
	if (ClapTrap::_hp > 0)
		std::cout << "FragTrap " << _name << " entusiastically offers you a high five!" << std::endl;
	else
		std::cout << "FragTrap " << getName() << " has no health left!"<< std::endl;
}
