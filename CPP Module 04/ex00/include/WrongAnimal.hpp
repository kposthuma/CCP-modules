/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 15:08:46 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include<string>
#include<iomanip>
#include<iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string _type);
		WrongAnimal(const WrongAnimal &src);
		~WrongAnimal();
		void operator=(const WrongAnimal &src);
		void setType(std::string _type);
		std::string getType() const;

		void makeSound() const;
};

#endif
