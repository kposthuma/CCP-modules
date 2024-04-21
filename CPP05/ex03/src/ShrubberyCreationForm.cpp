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
	AForm(formType[0], 145, 137), _target("the backyard"){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	AForm(formType[0], 145, 137), _target(target){
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
		std::string fileName = _target + "_shrubbery";
		std::ofstream outfile (fileName.c_str());
		outfile << "                                                         .\n                                              .         ;\n                 .              .              ;%     ;;\n                   ,           ,                :;%  %;\n                    :         ;                   :;%;'     .,\n           ,.        %;     %;            ;        %;'    ,;\n             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n               ;%;      %;        ;%;        % ;%;  ,%;'\n                `%;.     ;%;     %;'         `;%%;.%;'\n                 `:;%.    ;%%. %@;        %; ;@%;%'\n                    `:%;.  :;bd%;          %;@%;'\n                      `@%:.  :;%.         ;@@%;'\n                        `@%.  `;@%.      ;@@%;\n                          `@%%. `@%%    ;@@%;\n                            ;@%. :@%%  %@@%;\n                              %@bd%%%bd%%:;\n                                #@%%%%%:;;\n                                %@@%%%::;\n                                %@@@%(o);  . '\n                                %@@@o%;:(.,'\n                            `.. %@@@o%::;\n                               `)@@@o%::;\n                                %@@(o)::;\n                               .%@@@@%::;\n                               ;%@@@@%::;.\n                              ;%@@@@%%:;;;.\n                          ...;%@@@@@%%:;;;;,.. " << std::endl;
		outfile.close();
	}
	executor.executeForm(*this);
}
