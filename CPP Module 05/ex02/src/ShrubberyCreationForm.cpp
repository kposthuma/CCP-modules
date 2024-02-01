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

ShrubberyCreationForm::ShrubberyCreationForm():
	AForm("Presidential Pardon Form", 145, 137), _target("the backyard"){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	AForm("Presidential Pardon Form", 145, 137), _target(target){
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
	if (executeCheck(executor)){
		if (std::rand() % 2 == 0)
			std::cout << _target << " has successfully undergone a robotomy." << std::endl;
		else
			std::cout << _target << "'s robotomy failed." << std::endl;
	}		
	executor.executeForm(*this);
}
