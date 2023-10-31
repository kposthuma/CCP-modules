/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:11:18 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/31 17:15:16 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Weapon.hpp>

Weapon::Weapon(std::string type){
	setType(type); }
Weapon::~Weapon() {}

void Weapon::setType(std::string string){
	type = string; }

const std::string & Weapon::getType(void){
	return type; }

Weapon::Weapon(void)
{}
