/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 11:47:27 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaurat.hpp>

Bureaucrat *hireBureaucrat(std::string name, int grade){
	Bureaucrat *bur;
	try{
		bur = new Bureaucrat(name, grade);
	}
	catch(std::exception const &e){
		return NULL;
	}
	return bur;
}

int	main (void){
	Bureaucrat john("John", 1);
	std::cout << john << std::endl;

	Bureaucrat james("James", 150);
	std::cout << james << std::endl;

	Bureaucrat jeremy = james;

	john.incementGrade();
	james.decrementGrade();
	jeremy.incementGrade();
	
	std::cout << john << std::endl;
	std::cout << james << std::endl;
	std::cout << jeremy << std::endl;
	std::cout << std::endl;
	Bureaucrat *jack = hireBureaucrat("Jack", 15);
	if (jack != NULL)
		std::cout << *jack << std::endl;
	delete jack;
	return 0;
}
