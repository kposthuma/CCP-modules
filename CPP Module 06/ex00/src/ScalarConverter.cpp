/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:59 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/10 17:24:17 by kposthum      ########   odam.nl         */
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

int identify(std::string input){
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return 0;
	if (input == "-inf" || input == "+inf" || input == "nan")
		return 0;
	if (input.length() == 1 && input.find_first_of("1234567890") == std::string::npos)
		return 1;
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
		return 1;
	}
	if (input.find('.') != input.rfind('.'))
		throw InvalidInput();
	if (input.find('f') != std::string::npos){
		if (input.find_first_of("f") != input.length() - 1)
			throw InvalidInput();
		if (input.find('.') == input.length() - 2)
			throw InvalidInput();
		return input.length() - input.find('.') - 2;
	}
	if (input.find('.') != input.length() - 1)
		return input.length() - input.find('.') - 1;
	throw InvalidInput();
}

static void	display(std::string const &str, int i){
	double a;
	if (str.length() == 1 && std::isspace(str[0]))
		a = str[0];
	else
		a = std::stod(str);
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	std::cout.precision(i);
	if (a >= (int)32 && a <= (int)126)
		std::cout << "char:\t<" << (char)a << ">" << std::endl;
	else if ((a <= (int)32 && a >= (int)0) || a == (int)127)
		std::cout << "char:\t<" << "non-displayable" << ">" << std::endl;
	else
		std::cout << "char:\t<" << "out of bounds" << ">" << std::endl;
	if (a >= (double)INT_MIN && a <= (double)INT_MAX)
		std::cout << "int:\t<" << (int)a << ">" << std::endl;
	else
		std::cout << "int:\t<" << "out of bounds" << ">" << std::endl;
	std::cout << "float:\t<" << (float)a << "f>" << std::endl;
	std::cout << "double:\t<" << (double)a << ">" << std::endl;
}


void	ScalarConverter::convert(std::string const &str){
	int i = identify(str);
	display(str, i);
}