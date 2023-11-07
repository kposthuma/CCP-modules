/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/04 20:10:34 by koen          #+#    #+#                 */
/*   Updated: 2023/11/07 14:11:08 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Point.hpp>
#include<Fixed.hpp>

float get_len(Point const a, Point const b)
{
	float height = abs(a.getX() - b.getX());
	float width = abs(a.getY() - b.getY());
	return (sqrt((height * height) + (width * width)));
}

float get_Area(Point const a, Point const b, Point const c)
{
	float ab = get_len(a, b);
	float bc = get_len(b, c);
	float ac = get_len(a, c);
	return sqrt((ab + bc + ac) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float Area = get_Area(a, b , c);
	float subArea1 = get_Area(a, b, point);
	float subArea2 = get_Area(b, c, point);
	float subArea3 = get_Area(a, c, point);
	if (subArea1 + subArea2 + subArea3 > Area)
		return false;
	else
		return true;
}