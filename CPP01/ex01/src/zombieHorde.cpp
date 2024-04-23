/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:23:03 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 15:34:33 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Zombie.hpp>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zmb = new Zombie[N];
	while (N > 0){
		N--;
		zmb[N].setName(name);
	}
	return (zmb);
}
