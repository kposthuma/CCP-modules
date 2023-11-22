/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 14:46:40 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include<string>
#include<iomanip>
#include<iostream>
#include<AMateria.hpp>
#include<ICharacter.hpp>

class Cure : public AMateria{
	private:

	public:
		Cure();
		Cure(const Cure &src);
		virtual ~Cure();
		void operator=(const Cure &src);

		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};

#endif
