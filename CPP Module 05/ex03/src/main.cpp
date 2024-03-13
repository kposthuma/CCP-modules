/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/03/13 19:03:18 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaurat.hpp>
#include <AForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <Intern.hpp>

Bureaucrat	*hireBur(std::string name, int grade){
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

	Intern someRandomIntern;
	AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << rrf << std::endl;

	Bureaucrat *elPresidente = hireBur("el Presidente", 1);
	rrf->beSigned(*elPresidente);
	rrf->execute(*elPresidente);
	delete rrf;
	return 0;
}
