/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/21 16:33:29 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include<Animal.hpp>
#include<Brain.hpp>

class Cat : public Animal{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		void operator=(const Cat &src);
		
		Brain *getBrain() const;
		// Brain *copyBrain() const;
		void makeSound() const;
};

#endif
