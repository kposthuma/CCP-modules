/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 18:41:24 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/22 18:45:15 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<IMateriaSource.hpp>
#include<AMateria.hpp>

IMateriaSource::IMateriaSource(){
}

IMateriaSource::IMateriaSource(const IMateriaSource &src){
	operator=(src);
}

IMateriaSource::~IMateriaSource(){
}

void IMateriaSource::operator=(const IMateriaSource &src){
}