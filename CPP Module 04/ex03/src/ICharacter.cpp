/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 17:31:23 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/23 13:10:18 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<ICharacter.hpp>

ICharacter::ICharacter(){
}

ICharacter::ICharacter(const ICharacter &src){
	operator=(src);
}

ICharacter::~ICharacter(){
}

void ICharacter::operator=(const ICharacter &src){
	(void)src;
}

// std::string const & ICharacter::getName() const{
// 	return 0;
// }

// void ICharacter::equip(AMateria* m){
// 	std::cout << "Could not equip" << std::endl;
// }

// void ICharacter::unequip(int idx){
// 	std::cout << "Could not unequip" << std::endl;
// }

// void ICharacter::use(int idx, ICharacter& target){
// 	std::cout << "Materia on index" << idx << "used on " << target.getName() << "." << std::endl;
// }
