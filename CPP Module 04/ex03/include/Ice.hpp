/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 18:42:35 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include<string>

#include<iostream>
#include<AMateria.hpp>
#include<ICharacter.hpp>

class Ice : public AMateria{
	private:

	public:
		Ice();
		Ice(const Ice &src);
		~Ice();
		void operator=(const Ice &src);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
