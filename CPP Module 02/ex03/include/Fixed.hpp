/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:47 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/31 17:47:33 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

class Fixed
{
	private:
		int rawBits;
		static const int eight = 8;
	public:
		Fixed();
		Fixed(const Fixed &fix);
		Fixed(const int i);
		Fixed(const float f);
		void operator=(const Fixed& op);
		bool operator>(const Fixed& op) const;
		bool operator<(const Fixed& op) const;
		bool operator>=(const Fixed& op) const;
		bool operator<=(const Fixed& op) const;
		bool operator==(const Fixed& op) const;
		bool operator!=(const Fixed& op) const;
		float operator+(const Fixed& op) const;
		float operator-(const Fixed& op) const;
		float operator*(const Fixed& op) const;
		float operator/(const Fixed& op) const;
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
		void setRawBits(int const raw);
		int getRawBits(void) const;
};

std::ostream & operator << (std::ostream &out, const Fixed& op);

#endif
