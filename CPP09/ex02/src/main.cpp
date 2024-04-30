/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/30 16:50:39 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/30 19:04:47 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<vector>
#include<list>
#include<cstddef>
#include<string>
#include<iostream>
#include<climits>
#include <algorithm>
#include <numeric>

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

void FordJohnsonV(std::vector<int> &vect){
    std::vector<int>::iterator ptr = vect.begin();
	int temp;
	while (ptr < vect.end()){
		if (ptr + 1 != vect.end()){
			if (*ptr > *(ptr + 1)){
				temp = *ptr;
				*ptr = *(ptr + 1);
				*(ptr + 1) = temp;
			}
		}
		ptr++;
		if (ptr != vect.end())
			ptr++;
	}
	std::for_each(vect.begin(), vect.end(), [](const int n){std::cout << n << ' '; });
    std::cout << '\n';
}

void FordJohnsonL(std::list<int> &list){
	(void)list;
}

int main(int argc, char **argv){
	if (argc < 3)
		return 1;
	if (!validateInput(argv + 1))
		return 1;
	// std::cout << "input: ";
	// for (size_t i = 1; argv[i]; i++){
	// 	std::cout << argv[i] << ' ';
	// }
	// std::cout << std::endl;
	std::vector<int> vect;
	std::list<int> list;
	insertRange(vect, argv + 1);
	insertRange(list, argv + 1);
	FordJohnsonV(vect);
	FordJohnsonL(list);
	return 0;
}
