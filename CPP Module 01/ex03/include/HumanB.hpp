/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 16:43:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/31 17:51:39 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include<Weapon.hpp>

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void setName(std::string name);
		std::string getName();
		void setWeapon(Weapon &weapon);
		Weapon getWeapon();
		void attack();
};

#endif
