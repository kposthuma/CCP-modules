/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:43 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/21 16:43:23 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Animal.hpp>
#include<Cat.hpp>
#include<Dog.hpp>
#include<WrongAnimal.hpp>
#include<WrongCat.hpp>

int main(){
	{
		const Animal* pets[6];
		for (int i = 0; i < 6; i += 2)
			pets[i] = new Dog;
		for (int i = 1; i < 6; i += 2)
			pets[i] = new Cat;
		for (int i = 0; i < 6; i ++)

		std::cout << pets[i]->getType() << " " << std::endl;
	
		for (int i = 0; i < 6; i ++)
			delete pets[i];
	}
	return 0;
}
