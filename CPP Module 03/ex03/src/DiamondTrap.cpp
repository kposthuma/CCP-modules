/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:16:35 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 12:35:14 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : 
ClapTrap("noname_Clap_name"), ScavTrap(), FragTrap(),  name("noname"){
	std::cout << "A DiamondTrap materialized out of thin air" << std::endl;
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	ad = FragTrap::ad;
	hp_max = FragTrap::hp_max;
}
DiamondTrap::DiamondTrap(std::string _name) : 
ClapTrap(_name + "_Clap_name"), ScavTrap(_name), FragTrap(_name),  name(_name){
	std::cout << "A DiamondTrap materialized out of thin air" << std::endl;
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	ad = FragTrap::ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap &op){
	name = op.getName();
	hp = op.getHP();
	ep = op.getEP();
	ad = op.getAD();
	hp_max = op.getHPMax();
}

DiamondTrap::~DiamondTrap(){
	std::cout << "A DiamondTrap exploded!" << std::endl;
}

void DiamondTrap::attack(std::string target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	std::cout << "This DiamondTrap's name is " << name 
				<< " and its Clapname is " << getName() << "." << std::endl;
}
