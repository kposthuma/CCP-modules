/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/04 20:10:05 by koen          #+#    #+#                 */
/*   Updated: 2023/11/25 11:28:40 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Point.hpp>
#include<Fixed.hpp>

Point::Point() : x(0), y(0)
{}

Point::Point(const Fixed _x, const Fixed _y): x(_x), y(_y)
{}

Point::Point(const Point& point): x(point.x), y(point.y)
{}

void Point::operator=(const Point& point)
{
	Point x(point);
}

Point::~Point(){}

bool Point::operator==(const Point& src) const
{
	if (x == src.getX() && y == src.getY())
		return true;
	else
		return false;
}

Fixed Point::getX() const{
	return x;
}

Fixed Point::getY() const{
	return y;
}
