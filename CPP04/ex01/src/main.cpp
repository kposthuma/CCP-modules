/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:43 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/21 19:05:53 by kposthum      ########   odam.nl         */
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
		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		const Animal* pets[6];
		for (int i = 0; i < 6; i += 2)
			pets[i] = new Dog;
		for (int i = 1; i < 6; i += 2)
			pets[i] = new Cat;
		std::cout << std::endl;
		for (int i = 0; i < 6; i ++)
			std::cout << pets[i]->getType() << " " << std::endl;
		std::cout << std::endl;	
		for (int i = 0; i < 6; i ++)
			delete pets[i];
	}
	std::cout << std::endl;
	{
		const Dog doggo;
		std::cout << std::endl;
		const Dog pupper(doggo);
		std::cout << std::endl;
		(doggo.getBrain())->setIdea("So I Herd U Liek Mudkipz.\n", 0);
		std::cout << (pupper.getBrain())->getIdea(0) << std::endl;
		std::cout << (doggo.getBrain())->getIdea(0) << std::endl;
	}
	return 0;
}
