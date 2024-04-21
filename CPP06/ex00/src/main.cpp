/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/01 13:44:10 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ScalarConverter.hpp>
#include<exception>
#include<iostream>

int	main (int argc, char **argv){
	(void)argc;
	try{
		ScalarConverter::convert(argv[1]);
	}
	catch (std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
