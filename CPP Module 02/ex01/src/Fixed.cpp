/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 13:11:18 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/31 17:48:14 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Fixed.hpp>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed &src){
	std::cout << "Copy constructor called" << std::endl;
	operator=(src);
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	int j = i * (1 << 8);
	setRawBits(j);
}

Fixed::Fixed(const float f){
	std::cout << "Float constructor called" << std::endl;
	float i = f * (1 << _eight);
	setRawBits(roundf(i));
}

void Fixed::operator=(const Fixed& src){
	std::cout << "Copy assignment operator called" << std::endl;
	_rawBits = src.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
	float f = getRawBits();
	f = f / (1 << _eight);
	return f;
}

int Fixed::toInt( void ) const{
	float i = getRawBits();
	i = i / (1 << _eight);
	return (roundf(i));
}

void Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called" << std::endl;
	_rawBits = raw; }

int Fixed::getRawBits(void) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return _rawBits; }

std::ostream & operator<< (std::ostream &out, const Fixed& src){
	out << src.toFloat();
	return out;
}
