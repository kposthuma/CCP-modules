/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/23 12:36:52 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<string>
#include<iostream>
#include<ICharacter.hpp>

class AMateria{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &src);
		virtual ~AMateria();
		void operator=(const AMateria &src);

		void setType(std::string const & type);
		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
