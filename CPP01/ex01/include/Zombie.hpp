/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/18 10:37:46 by koen          ########   odam.nl         */
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
		std::string _name;
	public:
		void announce(void);
		void setName(std::string name);
		std::string getName(void);
		Zombie();
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
