/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbruggem <fbruggem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:26:37 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/13 14:16:44 by fbruggem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	// Fixed a( 1.25f );
	// Fixed b( 1 );
	// Fixed c( a );
	// Fixed d( b );
	// Fixed e( 5 );


	// std::cout << "A:" << a << "  |B:" << b << "  |C:" << c << "  |D:" << d << std::endl;
	// if (a < b)
	// 	std::cout << " <  test 1 works" << std::endl;
	// if (!(a > b))
	// 	std::cout << " >  test 2 works" << std::endl;
	// if (a == c)
	// 	std::cout << " == test 3 works" << std::endl;
	// if (a != b)
	// 	std::cout << " != test 4 works" << std::endl;
	// if ( a >= b && a >= c)
	// 	std::cout << " >= test 5 works" << std::endl;
	// if ( b <= d && b <= a)
	// 	std::cout << " <= test 6 works" << std::endl;
	// std::cout << " +  test 7 | a + b = " << a + b << std::endl;
	// std::cout << " -  test 8 | a - b = " << a - b << std::endl;
	// std::cout << " *  test 9 | a * e = " << a * e << std::endl;
	// std::cout << " /  test 10| a / e = " << a / e << std::endl;
	
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;

	// std::cout << b << std::endl;
	// std::cout << "\nMAX : ( a & b) " << Fixed::max( a, b ) << std::endl;
	// std::cout << "MIN : ( a & b) " << Fixed::min( a, b ) << std::endl;

	// std::cout << "\nmin and max to &fix_point\n";
	// std::cout << "MIN : ( a & b) " << Fixed::min( a.getRawBits(), b.getRawBits()) << std::endl;
	// std::cout << "MAX : ( a & b) " << Fixed::max( a.getRawBits(), b.getRawBits()) << std::endl;


	Fixed a(123.5f);
	// for (int i = 0; i < 34; i++)
	// {
	// 	std::cout << a.getBit(i) << std::endl;
	// }
	Fixed b(0.00000000075f);
	std::cout << a + b << std::endl;
	return 0;
	// 123.500000075
	// 2 500 500 500 > 7 stellen
}