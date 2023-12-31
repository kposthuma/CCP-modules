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

class Fixed
{
	private:
		int _rawBits;
		static const int _eight = 8;
	public:
		Fixed();
		Fixed(Fixed& src);
		void operator=(const Fixed& src);
		~Fixed();
		void setRawBits(int const raw);
		int getRawBits(void) const;
};

#endif
