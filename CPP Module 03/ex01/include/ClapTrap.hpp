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
	protected:
		std::string name;
		unsigned int hp;
		unsigned int ep;
		unsigned int ad;
		unsigned int hp_max;
	public:
		ClapTrap();
		ClapTrap(const std::string _name);
		ClapTrap(const ClapTrap &fix);
		~ClapTrap();
		void operator=(const ClapTrap& op);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName() const;
		int getHP() const;
		int getEP() const;
		int getAD() const;
		void setName(const std::string _name);
		void setHP(const unsigned int _hp);
		void setEP(const unsigned int _ep);
		void setAD(const unsigned int _ad);
		void setHPMax(const unsigned int _hp);
};

#endif
