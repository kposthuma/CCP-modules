/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/16 17:03:17 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<stddef.h>
#include<iostream>

template<typename Cont>
void func(Cont &cont){
	std::cout << "cont:\t" << cont << std::endl;
}

template<typename Arr, typename Cont, typename Func>
void iter(Arr *arr, size_t len, Func (*func)(Cont)){
	for (size_t i = 0; i < len; i++){
		func(arr[i]);
	}
}
