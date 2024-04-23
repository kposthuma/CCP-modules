/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:26:45 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/18 10:36:55 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Zombie.hpp>

void randomChump(std::string name){
	Zombie zmb;
	zmb.setName(name);
	zmb.announce();
}
