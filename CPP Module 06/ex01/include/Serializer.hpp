/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/01 13:14:26 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include<string>
#include<Data.hpp>

class Serializer
{
	private:
		Serializer();
		// ~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

#endif
