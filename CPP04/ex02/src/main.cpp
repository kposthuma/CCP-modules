/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:43 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 14:32:51 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<AAnimal.hpp>
#include<Cat.hpp>
#include<Dog.hpp>
#include<WrongAnimal.hpp>
#include<WrongCat.hpp>

int main(){
	AAnimal *fish = new Dog;

	fish->makeSound();
	delete fish;

	// AAnimal bird;
	// bird.makeSound();
	return 0;
}
