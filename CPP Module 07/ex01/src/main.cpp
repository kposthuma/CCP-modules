/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 16:16:38 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/16 17:04:38 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iter.hpp>
#include<string>
#include<iostream>

void out(char const &c){
	char *test = const_cast<char *>(&c);
	++(*test);
}

void increment(int &i){
	i++;
}

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};
	for (int i : arr){
		std::cout << i << "\t";
	}
	std::cout << std::endl;
	::iter(arr, 5, &increment);
	for (int i : arr){
		std::cout << i << "\t";
	}

	std::cout << std::endl;
	std::string string("Hello world");
	::iter(string.c_str(), string.length(), &out);
	std::cout << string << std::endl;

	std::string Lorem[] = {"Lorem ipsum dolor sit amet",
		"consectetur adipiscing elit",
		"sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam",
		"quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat",
		"Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur",
		"Excepteur sint occaecat cupidatat non proident",
		"sunt in culpa qui officia deserunt mollit anim id est laborum."};
	::iter(Lorem, 7, &::func<std::string>);

	return 0;
}