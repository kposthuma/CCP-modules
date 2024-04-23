/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/17 15:19:31 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception> 

template<typename T>
class Array{

	class	OutOfBoundsException : public std::exception{
	public:
		const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW{
			return "Out of bounds";
		}
	};

	private:
		T					*cont;
		const unsigned int	_size;
	public:
		Array(): _size(0){
			cont = new T[0];
		}
		Array(unsigned int n): _size(n){
			cont = new T[n];
			for (unsigned int i = 0; i < n; i++){
				cont[i] = 0;
			}
		}
		Array(Array const &src): _size(src.size()){
			cont = new T[_size];
			for (unsigned int i = 0; i < _size; i++){
				cont[i] = (src.getCont())[i];
			}
		}
		~Array(){
			delete []cont;
		}
		Array			operator=(Array const &src){
			Array arr(src);
			return arr;
		}
		T&				operator[](unsigned int i){
			if (i < 0 || i >= _size)
				throw OutOfBoundsException();
			return cont[i];
		}
		unsigned int	size() const{
			return _size;
		}
		T				*getCont() const{
			return cont;
		}
};
