/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/23 13:22:24 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <functional>
#include<iostream>
#include<cstddef>
#include<algorithm>
#include<set>
#include<climits>

class Span{
	class tooManyNumbers;
	class notEnoughNumbers;

	private:
		const unsigned int	_N;
		std::set<int>		_set;
	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span();
		Span			operator=(Span const &src);
		void			addNumber(const int &num);
		void			addRange(const std::set<int> &range);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		std::set<int>	getSet() const;
};

std::ostream & operator<< (std::ostream &out, const Span& src);