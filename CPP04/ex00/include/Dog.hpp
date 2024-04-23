/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:45 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 15:33:23 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include<Animal.hpp>

class Dog : public Animal{
	private:

	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		void operator=(const Dog &src);

		void makeSound() const;
};

#endif
