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
		int fix;
		static const int eight = 8;
	public:
		Fixed();
		Fixed(const Fixed &fix);
		Fixed(const int i);
		Fixed(const float f);
		void operator=(const Fixed& op);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		void setRawBits(int const raw);
		int getRawBits(void) const;
};

std::ostream & operator << (std::ostream &out, const Fixed& op);

#endif
