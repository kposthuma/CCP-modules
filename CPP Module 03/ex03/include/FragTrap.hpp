/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:20:21 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/14 14:48:51 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include<ClapTrap.hpp>

class FragTrap : virtual public ClapTrap {
	private:

	public:
		FragTrap(std::string _name);
		~FragTrap();
		void highFivesGuys(void);
};

#endif
