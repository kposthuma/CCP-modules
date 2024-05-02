/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/30 16:50:39 by kposthum      #+#    #+#                 */
/*   Updated: 2024/05/02 15:15:41 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<vector>
#include<list>
#include<cstddef>
#include<string>
#include<iostream>
#include<climits>
#include<algorithm>
#include<numeric>
#include<cmath>

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

void FordJohnsonV(std::vector<int> &vect, size_t layer){
    std::vector<int>::iterator ptr = vect.begin();
	while (ptr < vect.end()){
		if ((ptr + (2 * pow(2, layer))) <= vect.end()){
			std::cout << "comparing pairs: " << *(ptr + pow(2, layer) - 1)
				<< " " << *(ptr + (2 * pow(2, layer)) - 1) << std::endl;
			if (*(ptr + pow(2, layer) - 1) > *(ptr + (2 * pow(2, layer)) - 1)){
				std::swap_ranges(ptr, (ptr + pow(2, layer)),  (ptr + pow(2, layer)));
			}
		}
		ptr += pow(2, layer);
		if (ptr != vect.end())
			ptr += pow(2, layer);
	}
	std::for_each(vect.begin(), vect.end(), [](const int n){std::cout << n << ' '; });
    std::cout << '\n';
	if (vect.size() / pow(2, layer + 1) >= 1 && !std::is_sorted(vect.begin(), vect.end()))
		FordJohnsonV(vect, layer + 1);
	ptr = vect.end() - 1;
	std::cout << "current layer: " << layer << std::endl;
	while (ptr > vect.begin() && !std::is_sorted(vect.begin(), vect.end()) && vect.size() / pow(2, layer + 1) >= 1 && layer > 0){
		std::cout << "searching for insertion: " << *ptr
			<< " compare to: " << *(ptr - pow(2, layer - 1)) << std::endl;
		if (*ptr < *(ptr - pow(2, layer - 1))){
			std::cout << "create subcontainer of size " << pow(2, layer - 1)
				<< "\n\tinsert it in the right place" << std::endl;
			std::vector<int> temp;
			std::vector<int>::iterator it = (ptr - pow(2, layer - 1));
			for (size_t i = 0; i < pow(2, layer - 1); i++){
				temp.push_back(*it);
				it++;
			}
			// vect.erase((ptr - pow(2, layer - 1)), ptr);
			//find right place
		}
		ptr -= pow(2, (layer - 1));
	}
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
	FordJohnsonV(vect, 0);
	FordJohnsonL(list);
	return 0;
}
