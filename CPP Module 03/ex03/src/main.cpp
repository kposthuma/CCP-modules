/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/29 17:48:36 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ClapTrap.hpp>
#include<ScavTrap.hpp>
#include<FragTrap.hpp>
#include<DiamondTrap.hpp>

int main(void)
{
	DiamondTrap you("You");

	std::cout << "attck damage: " << you.getAD() << "\nmax hp: " << you.getHPMax() << "\nenergy: " << you.getEP() << std::endl;
	you.highFivesGuys();
	you.guardGate();
	you.whoAmI();
	you.attack("nobody in particular");
	you.takeDamage(99);
	you.beRepaired(200);
	return 0;
}
