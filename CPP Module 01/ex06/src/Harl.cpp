/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 16:21:23 by koen          #+#    #+#                 */
/*   Updated: 2023/11/01 18:58:27 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Harl.hpp>

void Harl::Debug()
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
	<< "I really do!" << std::endl;
}

void Harl::Info()
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::Warning()
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n"
	<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::Error()
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*ptr[4])(void) = {&Harl::Debug, &Harl::Info, &Harl::Warning, &Harl::Error};
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == lvl[i]){
			while (i < 4){
				(this->*ptr[i])();
				i++; }
				return ;}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

Harl::Harl()
{}

Harl::~Harl()
{}
