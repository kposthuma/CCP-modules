/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/02 17:31:32 by kposthum      ########   odam.nl         */
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
