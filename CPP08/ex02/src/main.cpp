/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:37 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/23 17:12:50 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<MutantStack.hpp>
#include<string>
#include<iostream>

#include<list>

void sametestbutwithlist(){
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.front() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	std::list<int>::iterator it = lst.begin();
	std::list<int>::iterator ite = lst.end();
	++it;
	--it;
	while (it != ite){
		std::cout << "<" << *it << ">,\t";
		++it;
	}
	std::cout << std::endl;
}

#include <cassert>
int main(){
	// tests provided by the subject
	{MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite){
		std::cout << "<" << *it << ">,\t";
		++it;
	}
	std::cout << std::endl << std::endl;
	// Same test but with list, should have same output
	sametestbutwithlist();
	//testing with a stack, should behave the same as my mutated abomination
	std::stack<int> s(mstack);
	try{
		assert(mstack.top() == s.top());
	}
	catch(std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	mstack.pop();
	mstack.pop();
	s.pop();
	s.pop();
	try{
		assert(mstack.top() == s.top());
	}
	catch(std::exception const &e){
		std::cout << e.what() << std::endl;
	}
	try{
		assert(mstack.size() == s.size());
	}
	catch(std::exception const &e){
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;
	// test with other variable type
	{MutantStack<std::string> strstack;
	strstack.push("Hello ");
	strstack.push(", ");
	std::cout << strstack.top() << std::endl;
	strstack.pop();
	strstack.push("World! ");
	strstack.push("How ");
	strstack.push("Are ");
	std::cout << strstack.size() << std::endl;
	strstack.push("You?");
	MutantStack<std::string>::iterator it = strstack.begin();
	MutantStack<std::string>::iterator ite = strstack.end();
	++it;
	--it;
	while (it != ite){
		std::cout << "<" << *it << ">,\t";
		++it;
	}}
	std::cout << std::endl;
	return 0;
}