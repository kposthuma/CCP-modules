/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 15:33:31 by kposthum      ########   odam.nl         */
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

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif
