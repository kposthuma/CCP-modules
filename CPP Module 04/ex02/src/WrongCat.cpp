/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:32 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 14:41:55 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal("Cat"){
	std::cout << "Default constuctor WrongCat called.\nWrongAnimal type has been set to \"Cat\"" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src){
	std::cout << "Copy constructor WrongCat has been called." << std::endl;
	operator=(src);
}

WrongCat::~WrongCat(){
	std::cout << "Default destructor WrongCat called" << std::endl;
}

void WrongCat::operator=(const WrongCat& src){
	std::cout << "Copy assignment operator WrongCat called" << std::endl;
	type = src.getType();
}

void WrongCat::makeSound() const{
	std::cout << "Woof." << std::endl;
}
