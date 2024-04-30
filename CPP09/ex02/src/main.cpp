/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/30 16:28:21 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// 00 uses map, 01 uses stack(deque?)
#include<vector>
#include<list>
#include<cstddef>
#include<string>
#include<iostream>
#include<climits>

template<typename T>
void insertRange(T &cont, char **arg){
	for (size_t i = 0; arg[i]; i++){
		cont.push_back(std::stoi(arg[i]));
	}
}

bool validateInput(char **arg){
	for (size_t i = 0; arg[i]; i++){
		std::string temp(arg[i]);
		if (temp.find_first_not_of("1234567890") != std::string::npos
		|| temp.length() > 10 || std::stol(temp) > INT_MAX)
			return false;
	}
	return true;
}

int main(int argc, char **argv){
	if (argc < 3)
		return 1;
	if (!validateInput(argv + 1))
		return 1;
	std::cout << "input: ";
	for (size_t i = 1; argv[i]; i++){
		std::cout << argv[i] << ' ';
	}
	std::cout << std::endl;
	std::vector<int> cont1;
	std::list<int> cont2;
	insertRange(cont1, argv + 1);
	insertRange(cont2, argv + 1);
	
	return 0;
}