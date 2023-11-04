/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/04 20:10:05 by koen          #+#    #+#                 */
/*   Updated: 2023/11/04 20:23:02 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Point.hpp>
#include<Fixed.hpp>

Point::Point(){
	x = 0;
	y = 0;
}

Point::Point(const Point& point){
	operator=(point);
}

void Point::operator=(const Point& point){
	x = point.getX();
	y = point.getY();
}

Point::~Point(){

}