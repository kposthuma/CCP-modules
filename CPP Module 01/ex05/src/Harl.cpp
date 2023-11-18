/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 16:21:23 by koen          #+#    #+#                 */
/*   Updated: 2023/11/18 10:43:31 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Harl.hpp>

void Harl::Debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::Info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::Warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::Error(){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	void (Harl::*ptr[4])(void) = {&Harl::Debug, &Harl::Info, &Harl::Warning, &Harl::Error};
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == lvl[i])
			(this->*ptr[i])();
	}
}

Harl::Harl(){}

Harl::~Harl(){}
