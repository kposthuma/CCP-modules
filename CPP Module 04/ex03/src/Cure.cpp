/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 15:34:51 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 17:20:42 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<AMateria.hpp>
#include<ICharacter.hpp>
#include<Cure.hpp>

Cure::Cure() : AMateria("cure"){
}

Cure::Cure(const Cure &src){
	operator=(src);
}

Cure::~Cure(){
}

void Cure::operator=(const Cure &src){
	_type = src.getType();
}

AMateria* Cure::clone() const{
	AMateria* clone = new Cure;
	return clone;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals" << target.getName() << "'s wounds *" << std::endl;
}
