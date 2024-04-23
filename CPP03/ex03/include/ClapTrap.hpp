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

class ClapTrap {
	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_ad;
		unsigned int	_hpMax;
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const std::string name, unsigned int hp, unsigned int ep, unsigned int ad);
		ClapTrap(const ClapTrap& src);
		~ClapTrap();
		void			operator=(const ClapTrap& src);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName() const;
		unsigned int	getHP() const;
		unsigned int	getEP() const;
		unsigned int	getAD() const;
		unsigned int	getHPMax() const;
		void			setName(const std::string name);
		void			setHP(const unsigned int hp);
		void			setEP(const unsigned int ep);
		void			setAD(const unsigned int ad);
		void			setHPMax(const unsigned int hp);
};

#endif
