/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:18 by kposthum      #+#    #+#                 */
/*   Updated: 2023/12/09 14:05:49 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include<ClapTrap.hpp>

class ScavTrap : public ClapTrap {
	private:

	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& srcy);
		~ScavTrap();
		void operator=(const ScavTrap& src);
		void attack(const std::string& target);
		void guardGate();	
};

#endif
