/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 13:38:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 16:11:45 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include<WrongAnimal.hpp>

class WrongCat : public WrongAnimal{
	private:

	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		~WrongCat();
		void operator=(const WrongCat &src);
		void makeSound() const;
};

#endif
