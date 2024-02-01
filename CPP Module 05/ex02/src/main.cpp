/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 17:12:39 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaurat.hpp>
#include <AForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

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
	
	Bureaucrat	*jack = hireBur("Jack", 1);
	Bureaucrat	*john = hireBur("John", 150);
	AForm		*form1 = new ShrubberyCreationForm("home");
	AForm		*form2 = new RobotomyRequestForm("Henk");
	AForm		*form3 = new PresidentialPardonForm("Edward Snowden");
	
	form1->beSigned(*jack);
	form2->beSigned(*john);
	form2->beSigned(*jack);
	form3->beSigned(*jack);
	std::cout << std::endl;
	std::cout << *form1 << std::endl;
	std::cout << *form2 << std::endl;
	std::cout << *form3 << std::endl;
	form1->execute(*john);
	form1->execute(*jack);
	form2->execute(*jack);
	form3->execute(*jack);
	delete	jack;
	delete	john;
	delete	form1;
	delete	form2;
	delete	form3;
	return 0;
}
