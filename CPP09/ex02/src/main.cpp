/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/30 16:50:39 by kposthum      #+#    #+#                 */
/*   Updated: 2024/05/15 17:40:22 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<PmergeMe.hpp>
#include<chrono>

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
	static std::chrono::_V2::system_clock::time_point start;
	static std::chrono::_V2::system_clock::time_point end;

	std::vector<int> vect;
	start = std::chrono::high_resolution_clock::now();
	insertRange(vect, argv + 1);
	FordJohnsonV(vect, 0);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "sorted vector:\t";
	std::for_each(vect.begin(), vect.end(), [](const int n){std::cout << n << ' '; });
	std::cout << '\n';
	std::cout << "time taken:\t" << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " μs" << std::endl << std::endl;

	std::list<int> list;
	start = std::chrono::high_resolution_clock::now();
	insertRange(list, argv + 1);
	FordJohnsonL(list, 0);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "sorted list:\t";
	std::for_each(list.begin(), list.end(), [](const int n){std::cout << n << ' '; });
	std::cout << '\n';
	std::cout << "time taken:\t" << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << " μs" << std::endl << std::endl;
	return 0;
}
