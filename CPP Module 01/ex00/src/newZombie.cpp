/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:23:03 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 13:37:17 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Zombie.hpp>

Zombie* newZombie(std::string name)
{
	Zombie* zmb = new(Zombie);
	zmb->setName(name);
	return (zmb);
}
