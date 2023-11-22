/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 17:31:23 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 18:49:23 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<AMateria.hpp>
#include<Character.hpp>
#include<Character.hpp>

Character::Character() : _name("Cloud Strife"){
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string & name) : _name(name){
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &src){
	operator=(src);
}

Character::~Character(){
	for (int i = 0; i < 4 && _inventory[i] != NULL; i++){
		delete _inventory[i];
	}
}

void Character::operator=(const Character &src){
	_name = src.getName();
	for (int i = 0; i < 4; i++)
		_inventory[i] = (src.getMateria(i))->clone();
}

std::string const & Character::getName() const{
	return _name;
}
AMateria *Character::getMateria(int idx) const{
	return _inventory[idx];
}

void Character::equip(AMateria* m){
	int i = 0;
	while (i < 4 && _inventory[i] != NULL)
		i++;
	if (i < 4)
		_inventory[i] = m;
}

void Character::unequip(int idx){
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
	if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}
