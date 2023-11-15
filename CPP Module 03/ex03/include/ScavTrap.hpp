/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:18 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/15 13:09:01 by kposthum      ########   odam.nl         */
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
		void scavHP();
		void scavEP();
		void scavAD();
		void guardGate();
};

#endif
