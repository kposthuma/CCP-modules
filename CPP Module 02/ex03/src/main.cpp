/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/25 12:32:40 by kposthum      #+#    #+#                 */
/*   Updated: 2023/11/07 17:09:44 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<Fixed.hpp>
#include<Point.hpp>

int main(void)
{
	Point a;
	Point b(0, 11);
	Point c(11, 0);
	Point d(1, 1);

	bsp(a, b ,c ,d);
	return 0;
}

// int main( void )
// {
// 		Fixed a;
// 		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 		std::cout << a << std::endl;
// 		std::cout << ++a << std::endl;
// 		std::cout << a << std::endl;
// 		std::cout << a++ << std::endl;
// 		std::cout << a << std::endl;

// 		std::cout << b << std::endl;

// 		std::cout << Fixed::max( a, b ) << std::endl;

// 	return 0;
// }
// int main( void )
// {
// 	Fixed a;
// 	Fixed b( a );
// 	Fixed c;
// 	Fixed d( 3 );

// 	c = b;

// 	std::cout << a.getRawBits() << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;
// 	std::cout << d.getRawBits() << std::endl;
// 	return 0;
// }

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( 10 );
// 	Fixed const c( 42.42f );
// 	Fixed const d( b );

// 	a = Fixed( 1234.4321f );
// 	Fixed const e = a;
// 	Fixed const f = ( 420.69f );

// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "e is " << e << std::endl;
// 	std::cout << "f is " << f << std::endl;
// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// 	std::cout << "e is " << e.toInt() << " as integer" << std::endl;
// 	std::cout << "f is " << f.toInt() << " as integer" << std::endl;

// 	return 0;
// }
