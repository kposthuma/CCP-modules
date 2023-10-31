/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 16:01:05 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/26 16:35:54 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<iomanip>
#include<string>

int main ()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "memory address of str\t\t" << &str << std::endl
		<< "memory address of stringPTR\t" << stringPTR << std::endl
		<< "memory address of stringREF\t" << &stringREF <<std::endl
		<< std::endl
		<< "value of str\t\t\t" << str << std::endl
		<< "value pointed to by stringPTR\t" << *stringPTR << std::endl
		<< "value pointed to by stringREF\t" << stringREF << std::endl;
	return 0;
}
