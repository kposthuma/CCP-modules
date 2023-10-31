/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 16:43:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 18:44:15 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include<Weapon.hpp>

class HumanB
{
	private:
		std::string name;
		Weapon weapon;
	public:
		void setName(std::string name);
		std::string getName();
		void setWeapon(Weapon weapon);
		Weapon getWeapon();
		HumanB(std::string name);
		~HumanB();
		void attack();
};

#endif
