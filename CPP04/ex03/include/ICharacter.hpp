/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/23 13:07:14 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include<string>
#include<iostream>
#include<AMateria.hpp>

class AMateria;

class ICharacter{
	private:

	public:
		ICharacter();
		ICharacter(const ICharacter &src);
		virtual ~ICharacter();
		void operator=(const ICharacter &src);

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif
