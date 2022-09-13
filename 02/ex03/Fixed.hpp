/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:26:58 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/13 16:36:22 by afenzl           ###   ########.fr       */
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

		static const Fixed&	min(const Fixed& fix1, const Fixed& fix2);
		static const int&	min(const int& fix1, const int& fix2);
		static const Fixed&	max(const Fixed& fix1, const Fixed& fix2);
		static const int&	max(const int& fix1, const int& fix2);

		// ******************* operator overloads: ********************

		// constructor overload
		void	operator = (const Fixed &fix);

		// comparison overloads
		bool	operator < (const Fixed &fix);
		bool	operator > ( Fixed &fix);
		bool	operator <= (Fixed &fix);
		bool	operator >= (Fixed &fix);
		bool	operator == (const Fixed &fix);
		bool	operator != (Fixed &fix);

		// binary arithmetic overloads
		Fixed	operator + (const Fixed &fix);
		Fixed	operator - (const Fixed &fix);
		Fixed	operator * (const Fixed &fix);
		Fixed	operator / (const Fixed &fix);

		// increment and decrement overloads
		Fixed		operator ++ ( void );
		Fixed		operator -- ( void );
		Fixed		operator ++ ( int );
		Fixed		operator -- ( int );
		
		~Fixed();
};

// output overload
std::ostream&	operator <<(std::ostream& output, const Fixed& fix);

#endif