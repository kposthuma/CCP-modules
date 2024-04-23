/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:36:50 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 16:14:12 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<string>
#include<iomanip>
#include<iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string _type);
		Animal(const Animal &src);
		virtual ~Animal();
		void operator=(const Animal &src);
		void setType(std::string _type);
		std::string getType() const;

		virtual void makeSound() const;
};

#endif
