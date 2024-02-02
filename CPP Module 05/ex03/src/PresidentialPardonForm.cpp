/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 12:33:06 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/02 14:00:42 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm():
	AForm(formType[2], 25, 5), _target("John Cena"){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	AForm(formType[2], 25, 5), _target(target){
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
	if (executeCheck(executor))
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	executor.executeForm(*this);
}
