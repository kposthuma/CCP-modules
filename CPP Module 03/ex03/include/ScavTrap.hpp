/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:18 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 12:19:54 by kposthum      ########   odam.nl         */
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
		ScavTrap(const ScavTrap &cpy);
		~ScavTrap();
		void operator=(const ScavTrap& op);
		void guardGate();	
};

#endif
