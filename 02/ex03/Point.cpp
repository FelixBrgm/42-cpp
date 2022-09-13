/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:10:26 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/12 17:02:51 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point &point) : x(point.x), y(point.y) {}

void	Point::operator= (const Point &point) const
{
	Point new_point(point);
}

Fixed	Point::get_x( void ) const
{
	return(this->x);
}

Fixed	Point::get_y( void ) const
{
	return(this->y);
}

Point::~Point() {}
