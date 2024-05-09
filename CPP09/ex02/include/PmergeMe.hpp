/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:26:19 by kposthum      #+#    #+#                 */
/*   Updated: 2024/05/09 15:35:47 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<vector>
#include<list>
#include<cstddef>
#include<string>
#include<iostream>
#include<climits>
#include<algorithm>
#include<numeric>
#include<cmath>

void	FordJohnsonV(std::vector<int> &vect, size_t layer);
void	FordJohnsonL(std::list<int> &vect, size_t layer);