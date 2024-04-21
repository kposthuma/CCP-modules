/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 18:41:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/23 13:10:50 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<IMateriaSource.hpp>

IMateriaSource::IMateriaSource(){
}

IMateriaSource::IMateriaSource(const IMateriaSource &src){
	operator=(src);
}

IMateriaSource::~IMateriaSource(){
}

void IMateriaSource::operator=(const IMateriaSource &src){
	(void)src;
}
