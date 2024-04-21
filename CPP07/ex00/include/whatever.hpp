/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/16 16:12:58 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void swap(T &var1, T &var2){
	T temp;
	temp = var1;
	var1 = var2;
	var2 = temp;
}

template<typename T>
T min(T &var1, T &var2){
	if (var1 < var2)
		return var1;
	else
		return var2;
}

template<typename T>
T max(T &var1, T &var2){
	if (var1 > var2)
		return var1;
	else
		return var2;
}
