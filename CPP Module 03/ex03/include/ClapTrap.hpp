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
		const unsigned int ad;
		const unsigned int hp_max;
	public:
		// ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(std::string _name, unsigned int _hp, unsigned int _ep, unsigned int _ad);
		// ClapTrap(const ClapTrap &fix);
		// void operator=(const ClapTrap& op);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName() const;
		int getHP() const;
		int getEP() const;
		int getAD() const;
		void setHP(const unsigned int _hp);
		void setEP(const unsigned int _ep);
};

#endif
