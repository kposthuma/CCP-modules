/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/23 12:52:06 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include<string>
#include<iostream>
#include<AMateria.hpp>

class Cure : public AMateria{
	private:

	public:
		Cure();
		Cure(const Cure &src);
		~Cure();
		void operator=(const Cure &src);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
