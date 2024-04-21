/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/02 11:27:34 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Weapon.hpp>
#include<HumanA.hpp>
#include<HumanB.hpp>

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		// jim.setWeapon(club);
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
