/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 12:32:46 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/02 14:01:14 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm():
	AForm(formType[1], 72, 45), _target("Your mother"){
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	AForm(formType[1], 72, 45), _target(target){
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

static int getRand(){
	srand((unsigned) time(NULL));
	return (rand());
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (executeCheck(executor)){
		if (getRand() % 2 == 0)
			std::cout << _target << " has successfully undergone a robotomy." << std::endl;
		else
			std::cout << _target << "'s robotomy failed." << std::endl;
	}	
	executor.executeForm(*this);
}
