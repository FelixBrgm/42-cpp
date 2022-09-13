/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:54:50 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/10 14:16:51 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int						fix_point;
		static const int literal = 8;
	public:

		Fixed();
		Fixed(const int integer);
		Fixed(const Fixed &fix);
		Fixed(const float n);

		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		void	operator = (const Fixed &fix);
		friend	std::ostream&	operator <<(std::ostream& output, const Fixed& fix);

		~Fixed();
};

#endif