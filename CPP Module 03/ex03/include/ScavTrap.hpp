/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:18 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/25 11:27:33 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include<ClapTrap.hpp>

class ScavTrap : virtual public ClapTrap {
	private:

	public:
		ScavTrap();
		ScavTrap(const std::string _name);
		ScavTrap(const ScavTrap& srcy);
		~ScavTrap();
		void operator=(const ScavTrap& src);
		void guardGate();
		void attack(std::string target);
};

#endif
