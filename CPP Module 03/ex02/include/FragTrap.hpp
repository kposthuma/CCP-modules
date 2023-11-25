/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:21 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/25 11:27:33 by koen          ########   odam.nl         */
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
		void operator=(const FragTrap& src);
		void highFivesGuys(void);
};

#endif
