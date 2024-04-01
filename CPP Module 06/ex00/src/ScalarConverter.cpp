/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:59 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/01 16:24:25 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<ScalarConverter.hpp>
#include<exception>
#include<iostream>
#include<limits.h>
#include<string>

class	InvalidInput : public std::exception{
	public:
		const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Invalid input. Please provide either a char, an int, a float or a double";
		}
};

std::string identify(std::string input){
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return "float";
	if (input == "-inf" || input == "+inf" || input == "nan")
		return "double";
	if (input.length() == 1 && input.find_first_of("1234567890") == std::string::npos)
		return "char";
	if (input.find_first_not_of("1234567890-.f") != std::string::npos)
		throw InvalidInput();
	if (input.find('-') != std::string::npos){
		if (input.find_last_of("-") != 0)
			throw InvalidInput();
	}
	if (input.find_first_of(".f") == std::string::npos){
		if (input.length() > 11 || (input.length() > 10 && input[0] != '-'))
			throw InvalidInput();
		long l = std::stol(input);
		if (l > INT_MAX || l < INT_MIN)
			throw InvalidInput();
		return "int";
	}
	if (input.find('.') != input.rfind('.'))
		throw InvalidInput();
	if (input.find('f') != std::string::npos){
		if (input.find_first_of("f") != input.length() - 1)
			throw InvalidInput();
		if (input.find('.') == input.length() - 2)
			throw InvalidInput();
		return "float";
	}
	if (input.find('.') != input.length() - 1)
		return "double";
	throw InvalidInput();
}

void	ScalarConverter::convert(std::string str){
	std::cout << "input:\t" << str << std::endl;
	std::cout << "result:\t" << identify(str) << std::endl;
}