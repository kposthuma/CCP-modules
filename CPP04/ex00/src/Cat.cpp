/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:32 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 16:13:13 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Cat.hpp>

Cat::Cat() : Animal("Cat"){
	std::cout << "Default constuctor Cat called.\nAnimal type has been set to \"Cat\"" << std::endl;
}

Cat::Cat(const Cat &src){
	std::cout << "Copy constructor Cat has been called." << std::endl;
	operator=(src);
}

Cat::~Cat(){
	std::cout << "Default destructor Cat called" << std::endl;
}

void Cat::operator=(const Cat& src){
	std::cout << "Copy assignment operator Cat called" << std::endl;
	type = src.getType();
}

void Cat::makeSound() const{
	std::cout << "Meow." << std::endl;
}
