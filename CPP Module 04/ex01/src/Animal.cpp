/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 16:44:13 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Animal.hpp>

Animal::Animal(){
	std::cout << "Default constuctor Animal called.\nNo type has been set." << std::endl;
}

Animal::Animal(std::string type): _type(type){
	std::cout << "Constuctor Animal has been called.\nType has been set to " << _type << std::endl;
}

Animal::Animal(const Animal &src){
	std::cout << "Copy constructor Animal has been called." << std::endl;
	operator=(src);
}

Animal::~Animal(){
	std::cout << "Destructor Animal called" << std::endl;
}

void Animal::operator=(const Animal& src){
	std::cout << "Copy assignment operator Animal called" << std::endl;
	_type = src.getType();
}

void Animal::setType(std::string type){
	_type = type;
}

std::string Animal::getType() const{
	return _type;
}

void Animal::makeSound() const{
	std::cout << "[insert animal noise here]" << std::endl;
}
