/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:54:50 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/09 15:40:00 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int						fix_point;
		static const int literal = 8;
	public:
		Fixed();
		Fixed(const Fixed &fix);
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		Fixed& operator= (Fixed &fix);
		
		~Fixed();
};

#endif