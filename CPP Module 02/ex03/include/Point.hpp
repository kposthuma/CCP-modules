/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/04 20:10:21 by koen          #+#    #+#                 */
/*   Updated: 2023/11/07 13:50:51 by kposthum      ########   odam.nl         */
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
		Point(const Fixed _x, const Fixed _y);
		Point(const Point& point);
		// void operator=(const Point& point);
		~Point();
		Fixed getX() const;
		Fixed getY() const;
};

#endif
