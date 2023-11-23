/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 15:34:51 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/23 12:53:32 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<AMateria.hpp>

AMateria::AMateria(){
}

AMateria::AMateria(std::string const & type) : _type(type){
}

AMateria::AMateria(const AMateria &src){
	operator=(src);
}

AMateria::~AMateria(){
}

void AMateria::operator=(const AMateria &src){
	_type = src.getType();
}

void AMateria::setType(std::string const & type){
	_type = type;
}

std::string const & AMateria::getType() const{
	return _type;
}

// AMateria* AMateria::clone() const{
// 	return 0;
// }

void AMateria::use(ICharacter& target){
	std::cout << "Unspecified Materia used on " << target.getName() << "." << std::endl;
}
