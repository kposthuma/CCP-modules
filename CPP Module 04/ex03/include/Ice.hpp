/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/23 12:51:59 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include<string>
#include<iostream>
#include<AMateria.hpp>

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
