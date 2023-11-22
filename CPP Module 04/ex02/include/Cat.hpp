/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 14:25:43 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include<AAnimal.hpp>
#include<Brain.hpp>

class Cat : public AAnimal{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		void operator=(const Cat &src);
		
		Brain *getBrain() const;
		void makeSound() const;
};

#endif
