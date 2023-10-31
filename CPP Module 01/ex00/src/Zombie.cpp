/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:11:18 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 13:37:03 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Zombie.hpp>

Zombie::Zombie()
{
	// std::cout << "Creating a new Zombie\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " has been slain!" << std::endl;
}
void Zombie::setName(std::string string)
{
	name = string;
}

std::string Zombie::getName(void)
{
	return name;
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
