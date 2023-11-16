/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:43 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 17:29:31 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Animal.hpp>
#include<Cat.hpp>
#include<Dog.hpp>
#include<WrongAnimal.hpp>
#include<WrongCat.hpp>

int main(){
	{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	i->getBrain();
	delete j;
	delete i;
	}
	return 0;
}
