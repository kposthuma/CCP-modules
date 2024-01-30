/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/01/30 13:06:06 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaurat.hpp>

int	main (void)
{
	Bureaucrat john("John", 1);
	std::cout << john << std::endl;

	Bureaucrat james("James", 150);
	std::cout << james << std::endl;

	try{
		john.incementGrade();
	}
	catch (std::exception & e){
		e.what();
	}
	std::cout << john << std::endl;
	return 0;
}
