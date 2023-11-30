/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:16:35 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/30 18:47:29 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : 
ClapTrap("noname_Clap_name"), ScavTrap(), FragTrap(),  _name("noname"){
	std::cout << "A DiamondTrap materialized out of thin air" << std::endl;
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep; // not how this works
	_ad = FragTrap::_ad;
	_hpMax = FragTrap::_hpMax;
}

DiamondTrap::DiamondTrap(std::string name) : 
ClapTrap(name + "_Clap_name"), ScavTrap(name), FragTrap(name),  _name(name){
	std::cout << "A DiamondTrap materialized out of thin air" << std::endl;
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep; // not how this works
	_ad = FragTrap::_ad;
	_hpMax = FragTrap::_hpMax;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src){
	operator=(src);
}

void DiamondTrap::operator=(const DiamondTrap &src){
	_name = src.getName();
	_hp = src.getHP();
	_ep = src.getEP();
	_ad = src.getAD();
	_hpMax = src.getHPMax();
}

DiamondTrap::~DiamondTrap(){
	std::cout << "A DiamondTrap exploded!" << std::endl;
}

// void DiamondTrap::attack(std::string target){
// 	ScavTrap::attack(target);
// }

void DiamondTrap::whoAmI(){
	std::cout << "This DiamondTrap's name is " << _name 
				<< " and its Clapname is " << getName() << "." << std::endl;
}
