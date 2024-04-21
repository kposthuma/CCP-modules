/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:28 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 14:25:19 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Dog.hpp>

Dog::Dog() : AAnimal("Dog"){
	std::cout << "Default constuctor Dog called. AAnimal type has been set to \"Dog\"" << std::endl;
	_brain = new Brain;
}

Dog::Dog(const Dog &src): AAnimal("Dog"){
	std::cout << "Copy constructor Dog has been called." << std::endl;
	operator=(src);
}

Dog::~Dog(){
	std::cout << "Default destructor Dog called" << std::endl;
	delete _brain;
}

void Dog::operator=(const Dog& src){
	std::cout << "Copy assignment operator Dog called" << std::endl;
	_brain = new Brain;
	_type = src.getType();
	*_brain = *src.getBrain();
}

void Dog::makeSound() const{
	std::cout << "Woof." << std::endl;
}

Brain *Dog::getBrain() const{
	// std::cout << "Dog::getBrain function called" << std::endl;
	return _brain;
}
