/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/30 14:35:08 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<RPN.hpp>
#include<stack>
#include<cstddef>
#include<string>
#include<iostream>

bool	checkInput(char *arg){
	std::string args(arg);
	if (args.find_first_not_of("1234567890+-/* ") != std::string::npos){
		// std::cout << "wrong character" << std::endl;
		return false;
	}
	for (size_t i = 0; arg[i]; i++){
		if (i % 2 == 1 && arg[i] != ' '){
			// std::cout << "not enough spaces" << std::endl;
			return false;
		}
	}
	return true;
}

bool doMath(std::stack<int> &RPN, char arg){
	int temp1;
	int temp2;

	if (RPN.empty()){
			// std::cout << "not enough numbers" << std::endl;
			return false;
		}
	temp1 = RPN.top();
	RPN.pop();
	if (RPN.empty()){
			// std::cout << "not enough numbers" << std::endl;
			return false;
		}
	temp2 = RPN.top();
	RPN.pop();
	if (arg == '+')
		RPN.push(temp1 + temp2);
	else if (arg == '-')
		RPN.push(temp2 - temp1);
	else if (arg == '*')
		RPN.push(temp1 * temp2);
	else if (arg == '/')
		RPN.push(temp2 / temp1);
	return true;
}

int RPN(int argc, char *arg){
	if (argc != 2)
		return 1;
	if (!checkInput(arg))
		return 1;
	std::stack<int> RPN;
	for (size_t i = 0; arg[i]; i++){
		if (arg[i] == '0' || arg[i] == '1' || arg[i] == '2'|| arg[i] == '3'|| arg[i] == '4'||
			arg[i] == '5'|| arg[i] == '6'|| arg[i] == '7'|| arg[i] == '8'|| arg[i] == '9')
			RPN.push(arg[i] - '0');
		else if (arg[i] == '+' || arg[i] == '-' || arg[i] == '*'|| arg[i] == '/'){
			if (doMath(RPN, arg[i]) == false)
				return 1;
		}
	}
	if (RPN.size() > 1){
		// std::cout << "too many numbers" << std::endl;
		return 1;
	}
	std::cout << RPN.top() << std::endl;
	return 0;
}

int main(int argc, char **argv){
	if (RPN(argc, argv[1]) != 0){
		std::cout << "Error" << std::endl;
		return 1;
	}
	return 0;
}