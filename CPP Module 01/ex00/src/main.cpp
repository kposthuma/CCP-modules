/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 15:28:07 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Zombie.hpp>

int main(void)
{
	std::string line;

	std::cout << "please input zombie name: ";
	std::getline(std::cin, line);
	Zombie *one = newZombie(line);
	Zombie *two = newZombie("Two");
	one->announce();
	two->announce();
	delete (two);
	randomChump("Three");
	delete (one);
	return (0);
}
