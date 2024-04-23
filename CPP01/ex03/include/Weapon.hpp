/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/31 17:47:33 by kposthum      ########   odam.nl         */
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
		std::string _type;
	public:
		Weapon(std::string type);
		~Weapon();
		void setType(std::string type);
		const std::string & getType(void);
};

#endif
