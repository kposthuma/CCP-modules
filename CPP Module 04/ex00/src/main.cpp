/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:43 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 15:20:34 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Animal.hpp>
#include<Cat.hpp>
#include<Dog.hpp>
#include<WrongAnimal.hpp>
#include<WrongCat.hpp>

int main(){
	Animal fish;
	Animal parrot("bird");
	Animal seagull(parrot);

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	fish.makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* k = new WrongCat();
	const WrongAnimal* l = new WrongAnimal();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << l->getType() << " " << std::endl;
	l->makeSound();

	delete k;
	delete l;
	return 0;
}
