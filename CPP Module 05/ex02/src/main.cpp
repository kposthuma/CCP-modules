/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 12:39:31 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaurat.hpp>
#include <AForm.hpp>

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

// AForm	*makeForm(std::string name, int signGrade, int execGrade){
// 	AForm *form;
// 	try{
// 		form = new AForm(name, signGrade, execGrade);
// 	}
// 	catch(std::exception const &e){
// 		return NULL;
// 	}
// 	return form;
// }

int	main (void){
	
	Bureaucrat	*jack = hireBur("Jack", 1);
	Bureaucrat	*john = hireBur("John", 150);
	// AForm		*form1 = makeForm("Form 1", 80, 69);
	// AForm		*form2 = makeForm("Form 2", 1, 1);
	
	// form1->beSigned(*jack);
	// form2->beSigned(*john);
	std::cout << std::endl;
	// std::cout << *form1 << std::endl;
	// std::cout << *form2 << std::endl;
	delete	jack;
	delete	john;
	// delete	form1;
	// delete	form2;
	return 0;
}
