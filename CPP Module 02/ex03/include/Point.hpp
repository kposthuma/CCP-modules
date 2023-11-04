/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/04 20:10:21 by koen          #+#    #+#                 */
/*   Updated: 2023/11/04 20:23:50 by koen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include<Fixed.hpp>

class Point{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const Point& point);
		void operator=(const Point& point);
		~Point();
		const Fixed getX();
		const Fixed getY();
};

#endif