/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:16:26 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 12:29:13 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include<ClapTrap.hpp>
#include<ScavTrap.hpp>
#include<FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string _name);
		DiamondTrap(const DiamondTrap &op);
		~DiamondTrap();
		void operator=(const DiamondTrap &op);
		void attack(std::string target);
		void whoAmI();
};

#endif
