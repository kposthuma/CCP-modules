/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 16:14:18 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/04 13:54:04 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include<ClapTrap.hpp>

class ScavTrap : virtual public ClapTrap {
	private:

	protected:
		const static unsigned int	_hp = 100;
		const static unsigned int	_ep = 50;
		const static unsigned int	_ad = 20;
		const static unsigned int	_hpMax = 100;
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& srcy);
		~ScavTrap();
		void	operator=(const ScavTrap& src);
		void	attack(const std::string& target);
		void	guardGate();
};

#endif
