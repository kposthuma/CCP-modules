/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/31 17:47:33 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include<iostream>
#include<iomanip>
#include<string>

class ClapTrap
{
	private:
		std::string name;
		unsigned int hp;
		unsigned int ep;
		unsigned int ad;
	public:
		ClapTrap();
		ClapTrap(const std::string _name);
		ClapTrap(const ClapTrap &fix);
		void operator=(const ClapTrap& op);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName() const;
		int getHP() const;
		int getEP() const;
		int getAD() const;
};

#endif
