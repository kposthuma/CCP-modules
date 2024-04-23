/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 14:16:26 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/04 13:49:10 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include<ClapTrap.hpp>
#include<ScavTrap.hpp>
#include<FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &op);
		~DiamondTrap();
		void		operator=(const DiamondTrap &op);
		std::string	getDiamondName() const;
		void		whoAmI();
		using		ScavTrap::attack;
};

#endif
