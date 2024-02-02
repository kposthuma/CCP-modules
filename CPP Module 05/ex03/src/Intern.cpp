/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/02/01 18:42:16 by kposthum      #+#    #+#                 */
/*   Updated: 2024/02/02 17:22:50 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

class	Intern::NoSuchFormException : public std::exception{
	public:
		const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Intern Exception: No form of specified type.";
		}
};

Intern::Intern(){
}

Intern::Intern(const Intern &src){
	*this = src;
}

Intern::~Intern(){
}

Intern Intern::operator=(const Intern &src){
	return src;
}

AForm *shrubberyCreation(std::string const &target){
	return new ShrubberyCreationForm(target);
}

AForm *robotomyRequest(std::string const &target){
	return new RobotomyRequestForm(target);
}

AForm *presidentialPardon(std::string const &target){
	return new PresidentialPardonForm(target);
}

static std::string	_makeType(const std::string &type){
	std::string newType(type);
	for (unsigned long i = 0; i < newType.length(); i++){
		if (i == 0 || newType[i - 1] == ' ')
			newType[i] = std::toupper(newType[i]);
	}
	return (newType + " Form");
}

AForm	*Intern::makeForm(const std::string &type,const std::string &target){
	AForm *(*ptr[3])(std::string const &target) = {&shrubberyCreation, &robotomyRequest, &presidentialPardon};
	try{
		for(int i = 0; i < 3; i++){
			if (_makeType(type) == formType[i])
				return ptr[i](target);
		}
		throw NoSuchFormException();
	}
	catch(std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	return NULL;
}
