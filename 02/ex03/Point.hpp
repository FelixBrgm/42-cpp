/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:07:35 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/12 17:11:22 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include"Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &point);
		
		void	operator= (const Point &point) const;
		
		Fixed	get_x() const;
		Fixed	get_y() const;
		~Point();

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif