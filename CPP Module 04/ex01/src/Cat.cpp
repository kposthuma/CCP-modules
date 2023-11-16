/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:32 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 17:27:40 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Cat.hpp>

Cat::Cat() : Animal("Cat"){
	std::cout << "Default constuctor Cat called.\nAnimal type has been set to \"Cat\"" << std::endl;
	Brain *_brain = new Brain;
}

Cat::Cat(const Cat &src){
	std::cout << "Copy constructor Cat has been called." << std::endl;
	operator=(src);
}

Cat::~Cat(){
	std::cout << "Default destructor Cat called" << std::endl;
	delete _brain;
}

void Cat::operator=(const Cat& src){
	std::cout << "Copy assignment operator Cat called" << std::endl;
	_type = src.getType();
	_brain = src.getBrain();
}

void Cat::makeSound() const{
	std::cout << "Meow." << std::endl;
}

Brain *Cat::getBrain() const{
	return _brain;
}
