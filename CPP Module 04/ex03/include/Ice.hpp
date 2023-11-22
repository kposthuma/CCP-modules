/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 14:46:35 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include<string>
#include<iomanip>
#include<iostream>
#include<AMateria.hpp>
#include<ICharacter.hpp>

class Ice : public AMateria{
	private:

	public:
		Ice();
		Ice(const Ice &src);
		virtual ~Ice();
		void operator=(const Ice &src);

		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
};

#endif
