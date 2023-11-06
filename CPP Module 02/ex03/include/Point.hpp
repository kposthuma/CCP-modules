/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/04 20:10:21 by koen          #+#    #+#                 */
/*   Updated: 2023/11/05 10:14:26 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include<Fixed.hpp>

class Point{
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const Point& point);
		Point(const Fixed _x, const Fixed _y);
		void operator=(const Point& point);
		~Point();
		const Fixed getX();
		const Fixed getY();
};

#endif