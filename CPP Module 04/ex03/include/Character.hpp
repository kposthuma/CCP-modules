/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 17:42:09 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include<string>
#include<iomanip>
#include<iostream>
#include<AMateria.hpp>
#include<ICharacter.hpp>

class Character : public ICharacter{
	private:
		AMateria *_inventory[4];
		std::string _name;
	public:
		Character();
		Character(const std::string & name);
		Character(const Character &src);
		~Character();
		void operator=(const Character &src);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
