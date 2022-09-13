/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:03:38 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/10 14:18:33 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fix_point = 0;
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called\n";
	
	this->fix_point = fix.fix_point;
}

Fixed& Fixed::operator= (Fixed &fix)
{
	this->fix_point = fix.fix_point;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

Fixed::~Fixed(void) {std::cout << "Destructor called\n";}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return(this->fix_point);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->fix_point = raw;
}

