/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:59 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/12 14:47:54 by kposthum      ########   odam.nl         */
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
		return FLOAT;
	if (input == "-inf" || input == "+inf" || input == "nan")
		return DOUBLE;
	if (input.length() == 1 && input.find_first_of("1234567890") == std::string::npos)
		return CHAR;
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
		return INT;
	}
	if (input.find('.') != input.rfind('.'))
		throw InvalidInput();
	if (input.find('f') != std::string::npos){
		if (input.find_first_of("f") != input.length() - 1)
			throw InvalidInput();
		if (input.find('.') == input.length() - 2)
			throw InvalidInput();
		return FLOAT;
	}
	if (input.find('.') != input.length() - 1)
		return DOUBLE;
	throw InvalidInput();
}

static void	displayChar(std::string const &str){
	char	a;
	a = str[0];

	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	std::cout.precision(1);
	if (a >= 32 && a <= 126)
		std::cout << "char:\t<" << a << ">" << std::endl;
	else if ((a <= 32 && a >= 0) || a == 127)
		std::cout << "char:\t<" << "non-displayable" << ">" << std::endl;
	std::cout << "int:\t<" << (int)a << ">" << std::endl;
	std::cout << "float:\t<" << (float)a << "f>" << std::endl;
	std::cout << "double:\t<" << (double)a << ">" << std::endl;
}

static void	displayInt(std::string const &str){
	int a;
	a = std::stoi(str);

	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	std::cout.precision(1);
	if (a >= (int)32 && a <= (int)126)
		std::cout << "char:\t<" << (char)a << ">" << std::endl;
	else if ((a <= (int)32 && a >= (int)0) || a == (int)127)
		std::cout << "char:\t<" << "non-displayable" << ">" << std::endl;
	else
		std::cout << "char:\t<" << "out of bounds" << ">" << std::endl;
	std::cout << "int:\t<" << a << ">" << std::endl;
	std::cout << "float:\t<" << (float)a << "f>" << std::endl;
	std::cout << "double:\t<" << (double)a << ">" << std::endl;
}

static void	displayFloat(std::string const &str){
	float a;
	a = std::stof(str);

	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	int i = str.length() - str.find('.') - 2;
	std::cout.precision(i);
	if (a >= (int)32 && a <= (int)126)
		std::cout << "char:\t<" << (char)a << ">" << std::endl;
	else if ((a <= (int)32 && a >= (int)0) || a == (int)127)
		std::cout << "char:\t<" << "non-displayable" << ">" << std::endl;
	else
		std::cout << "char:\t<" << "out of bounds" << ">" << std::endl;
	if (a >= (float)INT_MIN && a <= (float)INT_MAX)
		std::cout << "int:\t<" << (int)a << ">" << std::endl;
	else
		std::cout << "int:\t<" << "out of bounds" << ">" << std::endl;
	std::cout << "float:\t<" << a << "f>" << std::endl;
	std::cout << "double:\t<" << (double)a << ">" << std::endl;
}

static void	displayDouble(std::string const &str){
	double a;
	a = std::stod(str);

	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	int i = str.length() - str.find('.') - 1;
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
	std::cout << "double:\t<" << a << ">" << std::endl;
}

void	ScalarConverter::convert(std::string const &str){
	int i = identify(str);
	if (i == CHAR)
		displayChar(str);
	else if (i == INT)
		displayInt(str);
	else if (i == FLOAT)
		displayFloat(str);
	else if (i == DOUBLE)
		displayDouble(str);
	else
		throw InvalidInput();
}
