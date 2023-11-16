/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 14:33:41 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include<Animal.hpp>

class Cat : public Animal{
	private:

	public:
		Cat();
		Cat(std::string _type);
		Cat(const Cat &src);
		~Cat();
		void operator=(const Cat &src);
};

#endif
