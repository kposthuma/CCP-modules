/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/10 18:52:41 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Serializer.hpp>
#include<Data.hpp>
#include<iostream>

int	main (int argc, char **argv){
	if (argc < 2)
		return 1;
	Data data(argv[1]);
	std::cout << data.getContent() << std::endl;
	uintptr_t pointer = Serializer::serialize(&data);
	std::cout << pointer << std::endl;
	Data *data2 = Serializer::deserialize(pointer);
	std::cout << data2->getContent() << std::endl;
	return 0;
}
