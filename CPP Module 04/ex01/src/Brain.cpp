/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 16:28:32 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/16 17:24:23 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Brain.hpp>

Brain::Brain(){
	std::cout << "Default constuctor Brain called.\nNo type has been set." << std::endl;
}

Brain::Brain(std::string ideas[100]) {
	std::cout << "Constuctor Brain has been called." << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas[i];
}

Brain::Brain(const Brain &src){
	std::cout << "Copy constructor Brain has been called." << std::endl;
	operator=(src);
}

Brain::~Brain(){
	std::cout << "Destructor Brain called" << std::endl;
}

void Brain::operator=(const Brain& src){
	std::cout << "Copy assignment operator Brain called" << std::endl;
	for (int i = 0; i < 100; i++){
		std::string temp(src.getIdea(i));
		_ideas[i] = temp;
	}
}

void Brain::setIdea(std::string idea, int i){
	std::string temp(idea);
	_ideas[i] = temp;
}

std::string Brain::getIdea(int i) const{
	return _ideas[i];
}

// void Brain::setIdeas(std::string _ideas[100]){
// 	ideas = _ideas;
// }

// std::string Brain::getIdeas()[100] const{
// 	return ideas;
// }
