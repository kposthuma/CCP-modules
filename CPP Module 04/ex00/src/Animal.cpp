/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 15:21:16 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Animal.hpp>

Animal::Animal(){
	std::cout << "Default constuctor Animal called.\nNo type has been set." << std::endl;
}

Animal::Animal(std::string _type): type(_type){
	std::cout << "Constuctor Animal has been called.\nType has been set to " << type << std::endl;
}

Animal::Animal(const Animal &src){
	std::cout << "Copy constructor Animal has been called." << std::endl;
	operator=(src);
}

Animal::~Animal(){
	std::cout << "Default destructor Animal called" << std::endl;
}

void Animal::operator=(const Animal& src){
	std::cout << "Copy assignment operator Animal called" << std::endl;
	type = src.getType();
}

void Animal::setType(std::string _type){
	type = _type;
}

std::string Animal::getType() const{
	return type;
}

void Animal::makeSound() const{
	if (type == "Cat")
		std::cout << "Meow." << std::endl;
	else if (type == "Dog")
		std::cout << "Woof." << std::endl;
	else
		std::cout << "[insert animal noise here]" << std::endl;
}
