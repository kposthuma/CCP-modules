/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:21 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/04 13:47:26 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include<ClapTrap.hpp>

class FragTrap : public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(const std::string _name);
		FragTrap(const FragTrap& srcy);
		~FragTrap();
		void	operator=(const FragTrap& src);
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif
