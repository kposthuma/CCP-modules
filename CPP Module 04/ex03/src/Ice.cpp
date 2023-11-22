/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 15:34:51 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 17:19:33 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<AMateria.hpp>
#include<ICharacter.hpp>
#include<Ice.hpp>

Ice::Ice() : AMateria("ice"){
}

Ice::Ice(const Ice &src){
	operator=(src);
}

Ice::~Ice(){
}

void Ice::operator=(const Ice &src){
	_type = src.getType();
}

AMateria* Ice::clone() const{
	AMateria* clone = new Ice;
	return clone;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
