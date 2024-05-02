/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/05/02 14:41:23 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<deque>
#include<stack>
#include<exception>
#include<iterator>

template<class T, class Container = std::deque<T>>
class MutantStack : public std::stack<T>{
	private:
	public:
		typedef typename Container::iterator iterator;
		iterator begin(){
			return std::stack<T>::c.begin();
		}
		iterator end(){
			return std::stack<T>::c.end();
		}
};