/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/04 20:10:05 by koen          #+#    #+#                 */
/*   Updated: 2023/11/05 10:23:50 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Point.hpp>
#include<Fixed.hpp>

Point::Point() : x(0), y(0)
{}

Point::Point(const Point& point){
	operator=(point);
}

Point::Point(const Fixed _x, const Fixed _y): x(_x), y(_y)
{}

void Point::operator=(const Point& point)
{
	x.rawBits = point.x.getRawBits();
	y.rawBits = point.y.getRawBits();
}

Point::~Point(){

}

const Fixed Point::getX(){
	return x;
}

const Fixed Point::getY(){
	return y;
}