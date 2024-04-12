/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:16:35 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/04 13:57:05 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<DiamondTrap.hpp>

DiamondTrap::DiamondTrap() :
ClapTrap("noname_Clap_name"), ScavTrap(), FragTrap(),  _name("noname"){
	std::cout << "A DiamondTrap materialized out of thin air" << std::endl;
	ClapTrap::_hp = FragTrap::_hp;
	ClapTrap::_ep = ScavTrap::_ep;
	ClapTrap::_ad = FragTrap::_ad;
	ClapTrap::_hpMax = FragTrap::_hpMax;
}

DiamondTrap::DiamondTrap(std::string name) :
ClapTrap(name + "_Clap_name"), ScavTrap(name), FragTrap(name),  _name(name){
	std::cout << "A DiamondTrap named " << name << " materialized out of thin air" << std::endl;
	ClapTrap::_hp = FragTrap::_hp;
	ClapTrap::_ep = ScavTrap::_ep;
	ClapTrap::_ad = FragTrap::_ad;
	ClapTrap::_hpMax = FragTrap::_hpMax;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src), _name(src.getDiamondName()){
	operator=(src);
}

void DiamondTrap::operator=(const DiamondTrap &src){
	_name = src.getDiamondName();
	ClapTrap::_name = src.getName();
	ClapTrap::_hp = src.getHP();
	ClapTrap::_ep = src.getEP();
	ClapTrap::_ad = src.getAD();
	ClapTrap::_hpMax = src.getHPMax();
}

DiamondTrap::~DiamondTrap(){
	std::cout << "A DiamondTrap exploded!" << std::endl;
}

std::string DiamondTrap::getDiamondName() const{
	return _name;
}

void DiamondTrap::whoAmI(){
	std::cout << "This DiamondTrap's name is " << _name 
				<< " and its Clapname is " << getName() << "." << std::endl;
}
