/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: koen <koen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/04 20:10:34 by koen          #+#    #+#                 */
/*   Updated: 2023/11/07 17:14:41 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Point.hpp>
#include<Fixed.hpp>

static float get_len(Point const a, Point const b)
{
	float height = std::abs(a.getX() - b.getX());
	float width = std::abs(a.getY() - b.getY());
	float len = sqrt((height * height) + (width * width));
	return len;
}

static float get_Area(Point const a, Point const b, Point const c)
{
	float ab = get_len(a, b);
	float bc = get_len(b, c);
	float ac = get_len(a, c);
	float sPer = (ab + bc + ac) / 2;
	float Area = sqrt(sPer * (sPer - ab) * (sPer - bc) * (sPer - ac));
	return Area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (point == a || point == b || point == c){
		std::cout << "point is same as one of the vertices." << std::endl;
		return false;}
	Fixed Area(get_Area(a, b , c));
	std::cout << "this area: " << Area << std::endl;
	float subArea1 = get_Area(a, b, point);
	float subArea2 = get_Area(b, c, point);
	float subArea3 = get_Area(a, c, point);
	if (subArea1 == 0 || subArea2 == 0 || subArea3 == 0){
		std::cout << "point is on the edge of the triangle." << std::endl;
		return false;}
	Fixed check(subArea1 + subArea2 + subArea3);
	std::cout << "check: " << check << std::endl;
	if (check == Area){
		std::cout << "point is inside triangle abc." << std::endl;
		return true;}
	else{
		std::cout << "point is NOT inside triangle abc." << std::endl;
		return false;}
}
