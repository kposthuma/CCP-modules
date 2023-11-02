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

Fixed::Fixed(const Fixed &fix){
	std::cout << "Copy constructor called" << std::endl;
	operator=(fix);
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	setRawBits(i);
}

Fixed::Fixed(const float f){
	std::cout << "Float constructor called" << std::endl;
	setRawBits(f);
}

void Fixed::operator=(const Fixed& op){
	std::cout << "Copy assignment operator called" << std::endl;
	fix = op.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
	return (float)fix;
}

int Fixed::toInt( void ) const{
	return (int)fix;
}

void Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called" << std::endl;
	fix = raw; }

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return fix; }

std::ostream & operator << (std::ostream &out, const Fixed& op){
	out << op.toFloat();
	return out;
}
