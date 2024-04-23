/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:21 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/04 13:47:43 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include<ClapTrap.hpp>

class FragTrap : virtual public ClapTrap {
	private:

	protected:
		const static unsigned int	_hp = 100;
		const static unsigned int	_ep = 100;
		const static unsigned int	_ad = 30;
		const static unsigned int	_hpMax = 100;
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap& srcy);
		~FragTrap();
		void	operator=(const FragTrap& src);
		void	attack(std::string target);
		void	highFivesGuys(void);
};

#endif
