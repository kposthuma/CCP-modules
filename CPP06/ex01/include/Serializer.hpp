/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/10 18:49:53 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include<string>
#include<Data.hpp>
#include<stdint.h>

class Serializer
{
	private:
		Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
