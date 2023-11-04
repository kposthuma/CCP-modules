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
	// std::cout << "Default constructor called" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const Fixed &fix){
	// std::cout << "Copy constructor called" << std::endl;
	operator=(fix);
}

Fixed::Fixed(const int i){
	// std::cout << "Int constructor called" << std::endl;
	int j = i * (1 << 8);
	setRawBits(j);
}

Fixed::Fixed(const float f){
	// std::cout << "Float constructor called" << std::endl;
	float i = f * (1 << eight);
	setRawBits(roundf(i));
}

void Fixed::operator=(const Fixed& op){
	// std::cout << "Copy assignment operator called" << std::endl;
	rawBits = op.getRawBits();
}

bool Fixed::operator>(const Fixed& op) const {
	// std::cout << "Larger than operator called" << std::endl;
	if (rawBits > op.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<(const Fixed& op) const {
	// std::cout << "Smaller than operator called" << std::endl;
	if (rawBits < op.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>=(const Fixed& op) const {
	// std::cout << "Larger than or equal to operator called" << std::endl;
	if (rawBits >= op.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<=(const Fixed& op) const {
	// std::cout << "Smaller than or equal to operator called" << std::endl;
	if (rawBits <= op.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator==(const Fixed& op) const {
	// std::cout << "Equal to operator called" << std::endl;
	if (rawBits == op.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator!=(const Fixed& op) const {
	// std::cout << "Not equal to operator called" << std::endl;
	if (rawBits != op.getRawBits())
		return true;
	else
		return false;
}

float Fixed::operator+(const Fixed& op) const {
	// std::cout << "Addition operator called" << std::endl;
	float plus = toFloat() + op.toFloat();
	return plus;
}

float Fixed::operator-(const Fixed& op) const {
	// std::cout << "Subtraction operator called" << std::endl;
	float min = toFloat() - op.toFloat();
	return min;
}

float Fixed::operator*(const Fixed& op) const {
	// std::cout << "Multiplication operator called" << std::endl;
	float mult = toFloat() * op.toFloat();
	return mult;
}

float Fixed::operator/(const Fixed& op) const {
	// std::cout << "Division operator called" << std::endl;
	float divi = toFloat() / op.toFloat();
	return divi;
}

Fixed &Fixed::operator++(){
	++rawBits;
	return *this;
}

Fixed &Fixed::operator--(){
	--rawBits;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	rawBits++;
	return temp;		
}

Fixed Fixed::operator--(int){
	Fixed temp =*this;
	rawBits--;
	return temp;	
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
	float f = getRawBits();
	f = f / (1 << eight);
	return f;
}

int Fixed::toInt( void ) const{
	float i = getRawBits();
	i = i / (1 << eight);
	return (roundf(i));
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return a;
	else
		return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	if (a < b)
		return a;
	else
		return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	if (a > b)
		return a;
	else
		return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	if (a > b)
		return a;
	else
		return b;
}

void Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called" << std::endl;
	rawBits = raw; }

int Fixed::getRawBits(void) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return rawBits; }

std::ostream & operator << (std::ostream &out, const Fixed& op){
	out << op.toFloat();
	return out;
}
