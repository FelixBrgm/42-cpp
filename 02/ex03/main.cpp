/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:07:06 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/13 16:47:44 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main (void)
{
	// inside
	Point	A(10, 0);
	Point	B(0, 10);
	Point	C(0, 0);
	Point	P(1, 1);

// // on a edge
// 	Point	A(0, 0);
// 	Point	B(0, 1);
// 	Point	C(1, 0);
// 	Point	P(0, 1);

// // on a line
// 	Point	A(0, 0);
// 	Point	B(0, 10);
// 	Point	C(10, 0);
// 	Point	P(0, 5);

// outside
	// Point	A(0, 0);
	// Point	B(0, 10);
	// Point	C(10, 0);
	// Point	P(10, 10);

	if (bsp(A, B, C, P))
		std::cout << "the function returns true" << std::endl;
	else
		std::cout << "the funciton returns false" << std::endl;
	return (0);
}