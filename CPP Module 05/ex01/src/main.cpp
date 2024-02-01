/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 11:45:23 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaurat.hpp>
#include <Form.hpp>

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

Form	*makeForm(std::string name, int signGrade, int execGrade){
	Form *form;
	try{
		form = new Form(name, signGrade, execGrade);
	}
	catch(std::exception const &e){
		return NULL;
	}
	return form;
}

int	main (void){
	
	Bureaucrat	*jack = hireBur("Jack", 1);
	Bureaucrat	*john = hireBur("John", 150);
	Form		*form1 = makeForm("Form 1", 80, 69);
	Form		*form2 = makeForm("Form 2", 1, 1);
	
	form1->beSigned(*jack);
	form2->beSigned(*john);
	std::cout << std::endl;
	std::cout << *form1 << std::endl;
	std::cout << *form2 << std::endl;
	delete	jack;
	delete	john;
	delete	form1;
	delete	form2;
	return 0;
}
