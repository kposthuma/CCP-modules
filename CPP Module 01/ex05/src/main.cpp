/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 16:20:52 by koen          #+#    #+#                 */
/*   Updated: 2023/11/01 16:48:10 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Harl.hpp>

int main ()
{
	std::cout << "Please input HARL-level: \"DEBUG\", \"INFO\", \"WARNING\", or \"ERROR\"" << std::endl;
	std::string level;
	std::getline(std::cin, level);
	Harl Harl;
	Harl.complain(level);
}