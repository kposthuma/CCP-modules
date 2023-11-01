/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 16:20:52 by koen          #+#    #+#                 */
/*   Updated: 2023/11/01 18:57:13 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Harl.hpp>

int main (int argc, char **argv)
{
	if (argc != 2){
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 1;}
	std::string level(argv[1]);
	Harl Harl;
	Harl.complain(level);
}