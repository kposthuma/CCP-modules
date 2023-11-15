/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/14 15:52:33 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<FragTrap.hpp>

FragTrap::FragTrap(std::string _name): ClapTrap(_name, 100, 100, 30){
	std::cout << "A FragTrap was born!" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "A FragTrap passed away!" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << getName() << " entusiastically offers you a high five!" << std::endl;
}
