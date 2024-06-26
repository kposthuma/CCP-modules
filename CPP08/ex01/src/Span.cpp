/* ************************************************************************** */
/*				                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/21 19:42:13 by koen          #+#    #+#                 */
/*   Updated: 2024/04/23 13:21:53 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Span.hpp>
#include<iostream>

class	Span::tooManyNumbers : public std::exception{
	public:
		const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Too many numbers.";
		}
};

class	Span::notEnoughNumbers : public std::exception{
	public:
		const char	*what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Not enough numbers.";
		}
};

Span::Span(unsigned int N) : _N(N){
}

Span::Span(Span const &src) : _N(src._N){
}

Span::~Span(){
}

Span	Span::operator=(Span const &src){
	Span span(src._N);
	span._set = src._set;
	return span;
}

void	Span::addNumber(const int &num){
	if (_set.size() < _N)
		_set.insert(num);
	else
		throw tooManyNumbers();
}

void	Span::addRange(const std::set<int> &range){
	if (_set.size() + range.size() > _N)
		throw tooManyNumbers();
	else
		_set.insert(range.begin(), range.end());
	
}

unsigned int	Span::shortestSpan(){
	if (_set.size() < 2)
		throw notEnoughNumbers();
	unsigned int s;
	std::set<int>::iterator i1 = _set.begin();
	std::set<int>::iterator i2 = _set.begin();
	i2++;
	s = *i2 - *i1;
	while (i2 != _set.end()){
		if ((unsigned int)(*i2 - *i1) < s)
			s = *i2 - *i1;
		i1++;
		i2++;
	}
	return s;
}

unsigned int	Span::longestSpan(){
	if (_set.size() < 2)
		throw notEnoughNumbers();
	return (*(_set.rbegin()) - *(_set.begin()));
}

std::set<int>	Span::getSet() const{
	return _set;
}

std::ostream & operator<< (std::ostream &out, const Span& src){
	std::set<int> temp = src.getSet();
    out << '{';
    for (int const &i : temp){
        out << ' ' << i;
	}
	out << " } ";
	return out;
}

