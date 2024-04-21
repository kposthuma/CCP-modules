/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   EasyFind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/21 19:02:35 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<cstddef>
#include<algorithm>

#include<array>
#include<vector>
#include<deque>
#include<list>
#include<forward_list>

// returns place in list where val is found, otherwise return -1
template<typename T>
int easyFind(T cont, int val)
{
	auto it = std::find(cont.begin(), cont.end(), val);
	if (it == cont.end())
		return -1;
	return (*it - 1);
}