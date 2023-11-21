/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:45 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/21 16:33:25 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include<Animal.hpp>
#include<Brain.hpp>

class Dog : public Animal{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		void operator=(const Dog &src);

		Brain *getBrain() const;
		// Brain *copyBrain(const Dog &src) const;
		void makeSound() const;
};

#endif
