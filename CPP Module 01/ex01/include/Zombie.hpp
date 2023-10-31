/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 16:57:18 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include<iostream>
#include<iomanip>
#include<string>

class Zombie
{
	private:
		std::string name;
	public:
		void announce(void);
		void setName(std::string name);
		std::string getName(void);
		Zombie();
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
