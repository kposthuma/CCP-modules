/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/08 16:04:16 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ClapTrap.hpp>

int main(void)
{
	{
		ClapTrap Henk("Henk");
		Henk.attack("you");
		Henk.takeDamage(9);
		Henk.beRepaired(20);
		Henk.takeDamage(12);
		Henk.takeDamage(9);
		Henk.attack("you");
	}
	{
		ClapTrap b("Gijsbertus Wilibrordus Johannes Maria de Blaauw");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
		b.attack("the plebs");
	}
	return 0;
}
