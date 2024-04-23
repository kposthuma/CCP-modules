/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/23 15:16:47 by kposthum      ########   odam.nl         */
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
		typedef typename std::deque<T>::iterator iterator;
		iterator begin(){
			return std::stack<T>::c.begin();
		}
		iterator end(){
			return std::stack<T>::c.end();
		}
};