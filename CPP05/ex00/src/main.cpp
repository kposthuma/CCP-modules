/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/03/13 18:57:03 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaurat.hpp>

Bureaucrat *hireBureaucrat(std::string name, int grade){
	Bureaucrat *bur;
	try{
		bur = new Bureaucrat(name, grade);
	}
	catch(std::exception const &e){
		std::cout << e.what() << std::endl;
		return NULL;
	}
	return bur;
}

int	main (void){
	try{
		Bureaucrat john("John", 1);
		std::cout << john << std::endl;
		john.incementGrade();
		std::cout << john << std::endl;
	}
	catch(std::exception const &e){
		std::cout << e.what() << std::endl;
	}

	Bureaucrat james("James", 150);
	std::cout << james << std::endl;

	Bureaucrat jeremy = james;

	james.decrementGrade();
	jeremy.incementGrade();
	
	std::cout << james << std::endl;
	std::cout << jeremy << std::endl;
	std::cout << std::endl;
	Bureaucrat *jack = hireBureaucrat("Jack", 9999);
	if (jack != NULL)
		std::cout << *jack << std::endl;
	delete jack;
	return 0;
}
