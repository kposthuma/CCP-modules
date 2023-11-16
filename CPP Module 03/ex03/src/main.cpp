/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 13:30:12 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ClapTrap.hpp>
#include<ScavTrap.hpp>
#include<FragTrap.hpp>
#include<DiamondTrap.hpp>

int main(void)
{
	DiamondTrap you("You");

	you.highFivesGuys();
	you.guardGate();
	you.whoAmI();
	you.attack("nobody in particular");
	you.takeDamage(99);
	you.beRepaired(200);
	return 0;
}
