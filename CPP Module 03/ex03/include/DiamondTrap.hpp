/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:16:26 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/30 18:42:55 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include<ClapTrap.hpp>
#include<ScavTrap.hpp>
#include<FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &op);
		~DiamondTrap();
		void operator=(const DiamondTrap &op);
		// void attack(std::string target);
		using ScavTrap::attack;
		void whoAmI();
};

#endif
