/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:18 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/14 14:48:55 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include<ClapTrap.hpp>

class ScavTrap : virtual public ClapTrap {
	private:

	public:
		ScavTrap(std::string _name);
		~ScavTrap();
		void guardGate();	
};

#endif