/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/26 14:25:59 by kposthum      #+#    #+#                 */
/*   Updated: 2024/04/01 13:13:53 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Data.hpp>

Data::Data(): _content("content"){
}

Data::Data(std::string const &src): _content(src){
}

Data::Data(Data const &src): _content(src._content){
}

Data::~Data(){
}

Data	Data::operator=(Data const &src){
	this->_content = src._content;
	return *this;
}

std::string Data::getContent(){
	return _content;
}

void Data::setContent(std::string const &src){
	_content = src;
}