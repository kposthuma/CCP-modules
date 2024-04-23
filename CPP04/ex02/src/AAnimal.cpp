/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 14:25:47 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<AAnimal.hpp>

AAnimal::AAnimal(){
	std::cout << "Default constuctor AAnimal called. No type has been set." << std::endl;
}

AAnimal::AAnimal(std::string type): _type(type){
	std::cout << "Constuctor AAnimal has been called. Type has been set to " << _type << std::endl;
}

AAnimal::AAnimal(const AAnimal &src){
	std::cout << "Copy constructor AAnimal has been called." << std::endl;
	operator=(src);
}

AAnimal::~AAnimal(){
	std::cout << "Destructor AAnimal called" << std::endl;
}

void AAnimal::operator=(const AAnimal& src){
	std::cout << "Copy assignment operator AAnimal called" << std::endl;
	_type = src.getType();
}

void AAnimal::setType(std::string type){
	// std::cout << "AAnimal::setType function called" << std::endl;
	_type = type;
}

std::string AAnimal::getType() const{
	// std::cout << "AAnimal::getType function called" << std::endl;
	return _type;
}

void AAnimal::makeSound() const{
	std::cout << "[insert animal noise here]" << std::endl;
}
