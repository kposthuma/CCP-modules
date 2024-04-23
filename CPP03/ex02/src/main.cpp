/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/14 13:46:19 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ClapTrap.hpp>
#include<ScavTrap.hpp>
#include<FragTrap.hpp>

int main(void)
{
	FragTrap gerrit("Gerrit");

	gerrit.highFivesGuys();
	gerrit.attack("an unexpecting peer");
	gerrit.takeDamage(8);
	gerrit.beRepaired(15);
	return 0;
}
