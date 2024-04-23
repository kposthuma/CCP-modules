/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/21 19:03:04 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<EasyFind.hpp>
#include<string>
#include<iostream>

int main(void) {
	std::forward_list<int> fwd = {1, 2, 3, 4, 5};
	std::array<int, 5> arr = {1, 2, 3, 4, 5};
	std::vector<int> vec = {1, 2, 3, 4, 5};
	std::deque<int> deq = {1, 2, 3, 4, 5};
	std::list<int> lis = {1, 2, 3, 4, 5};

	std::cout << "Forward_list test:\t" << easyFind(fwd, 1) << std::endl;
	std::cout << "Array test:\t\t" << easyFind(arr, 2) << std::endl;
	std::cout << "Vector test:\t\t" << easyFind(vec, 3) << std::endl;
	std::cout << "Deque test:\t\t" << easyFind(deq, 4) << std::endl;
	std::cout << "List test:\t\t" << easyFind(lis, 5) << std::endl;
	std::cout << "Not found test:\t\t" << easyFind(lis, 12) << std::endl;
	return 0;
}
