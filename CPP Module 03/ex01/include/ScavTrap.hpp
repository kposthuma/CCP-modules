/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:25:01 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/14 13:25:02 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include<ClapTrap.hpp>

class ScavTrap : public ClapTrap {
	private:

	public:
		ScavTrap(std::string _name);
		~ScavTrap();
		void guardGate();	
};

#endif