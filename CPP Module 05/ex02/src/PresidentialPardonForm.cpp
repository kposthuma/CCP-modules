/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 12:33:06 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 14:54:55 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon Form", 25, 5), _target("John Cena"){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src):
	AForm(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src.getTarget()){
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm	PresidentialPardonForm::operator=(const PresidentialPardonForm &src){
	return src;
}

std::string	PresidentialPardonForm::getTarget() const{
	return _target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	executeCheck(executor);
	// do something
	executor.executeForm(*this);
}
