/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:21 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 13:04:21 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include<ClapTrap.hpp>

class FragTrap : virtual public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(const std::string _name);
		FragTrap(const FragTrap &cpy);
		~FragTrap();
		void operator=(const FragTrap& op);
		void highFivesGuys(void);
		void attack(std::string target);
};

#endif
