/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/16 17:51:29 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception> 

template<typename T>
class Array{

	class	OutOfBoundsException{
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
			cont = new int[0];
		}

		Array(unsigned int n): _size(n){
			cont = new int[n];
			for (unsigned int i; i < n; i++){
				cont[i] = 0;
			}
		}

		Array(Array const &src): _size(src.size()){
			cont = new int[_size];
			for (unsigned int i; i < _size; i++){
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

		T				*operator[](unsigned int i){
			if (i < 0 || i >= _size)
				throw OutOfBoundsException();
			return &cont[i];
		}

		unsigned int	size() const{
			return _size;
		}

		T				*getCont() const{
			return cont;
		}
};
