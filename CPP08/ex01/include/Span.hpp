/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/21 20:20:19 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<cstddef>
#include<algorithm>
#include<set>
#include<climits>

class Span{
	class tooManyNumbers;

	private:
		const unsigned int	_N;
		std::set<int>		_set;
	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span();
		Span operator=(Span const &src);
		void addNumber(const int &num);
		void addRange(const std::set<int> &range);
		unsigned int shortestSpan();
		unsigned int longestSpan();
};
