/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:28 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 14:41:53 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Dog.hpp>

Dog::Dog(): Animal("Dog"){
	std::cout << "Default constuctor Dog called.\nAnimal type has been set to \"Dog\"" << std::endl;
}

Dog::Dog(const Dog &src){
	std::cout << "Copy constructor Dog has been called." << std::endl;
	operator=(src);
}

Dog::~Dog(){
	std::cout << "Default destructor Dog called" << std::endl;
}

void Dog::operator=(const Dog& src){
	std::cout << "Copy assignment operator Dog called" << std::endl;
	type = src.getType();
}
