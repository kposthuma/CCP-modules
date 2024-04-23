/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 16:43:32 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/02 11:36:43 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include<Weapon.hpp>

class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void setName(std::string name);
		std::string getName();
		void setWeapon(Weapon weapon);
		Weapon getWeapon();
		void attack();
};

#endif
