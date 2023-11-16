/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 14:38:05 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<WrongAnimal.hpp>

WrongAnimal::WrongAnimal(){
	std::cout << "Default constuctor WrongAnimal called.\nNo type has been set." << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type): type(_type){
	std::cout << "Constuctor WrongAnimal has been called.\nType has been set to " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
	std::cout << "Copy constructor WrongAnimal has been called." << std::endl;
	operator=(src);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Default destructor WrongAnimal called" << std::endl;
}

void WrongAnimal::operator=(const WrongAnimal& src){
	std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
	type = src.getType();
}

void WrongAnimal::setType(std::string _type){
	type = _type;
}

std::string WrongAnimal::getType() const{
	return type;
}

void WrongAnimal::makeSound() const{
	if (type == "Cat")
		std::cout << "Woof." << std::endl;
	else if (type == "Dog")
		std::cout << "Meow." << std::endl;
	else
		std::cout << "Did you know? A trade law from 1998 in Nepal banned several American treats, including Oreos, from entering the country due to their large amount of high-fructose corn syrup." << std::endl;
}
