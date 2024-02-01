/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 12:32:46 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/01 14:54:36 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm(): AForm("Presidential Pardon Form", 25, 5), _target("Your mother"){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src):
	AForm(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src.getTarget()){
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

RobotomyRequestForm	RobotomyRequestForm::operator=(const RobotomyRequestForm &src){
	return src;
}

std::string	RobotomyRequestForm::getTarget() const{
	return _target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	executeCheck(executor);
	// do something
	executor.executeForm(*this);
}
