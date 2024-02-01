/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 12:32:27 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 14:24:40 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Presidential Pardon Form", 25, 5), _target("the backyard"){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src):
	AForm(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src.getTarget()){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src){
	return src;
}

std::string	ShrubberyCreationForm::getTarget() const{
	return _target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	executeCheck(executor);
	// do something
	executor.executeForm(*this);
}
