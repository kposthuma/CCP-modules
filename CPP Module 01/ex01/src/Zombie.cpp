/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:11:18 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/18 10:39:15 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Zombie.hpp>

Zombie::Zombie(){
	std::cout << "Creating a new Zombie" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie " << _name << " has been slain!" << std::endl;
}

void Zombie::setName(std::string string){
	_name = string;
}

std::string Zombie::getName(void){
	return _name;
}

void Zombie::announce( void ){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
