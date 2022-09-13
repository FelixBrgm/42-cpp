/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:50:48 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/13 16:48:05 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

float	calculate_area(Point const one, Point const two,  Point const three)
{
	Fixed area = (
					one.get_x() * (two.get_y() - three.get_y())
					+ two.get_x() * (three.get_y() - one.get_y())
					+ three.get_x() * (one.get_y() - two.get_y())) 
					/ Fixed(2);
	if (area.getRawBits() < 0)
		area.setRawBits(area.getRawBits() * -1);
	return(area.toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float A = calculate_area(a, b, c);
	float P1 = calculate_area(a, b, point);
	float P2 = calculate_area(a, c, point);
	float P3 = calculate_area(b, c, point);

	if (P1 <= 0 || P2 <= 0 || P3 <= 0)
		return (false);
	
	return (A == (P1 + P2 + P3));
}
