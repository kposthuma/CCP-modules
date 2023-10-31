/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 18:42:56 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>
#include<iomanip>
#include<string>

class Weapon
{
	private:
		std::string type;
	public:
		void setType(std::string type);
		std::string getType(void);
		Weapon(std::string type);
		Weapon(void);
		~Weapon();
};

#endif
