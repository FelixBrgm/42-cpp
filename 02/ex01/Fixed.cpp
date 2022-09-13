/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:03:38 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/13 17:05:34 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ************************* Helper Functions  ************************* 

int high(int i, int e)
{
	int n = 1;

	while (e--)
		n *= i;
	return (n);
}



// ************************* Constructors ************************* 

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";

	this->fix_point = 0;
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called\n";
	
	*this = fix;
}


Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	
	this->fix_point = n * high(2, this->literal);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	
	this->fix_point =  roundf(n);

	float c = n - roundf(n);

	if (c < 0)
	{
		c = 1.0f + c;
		this->fix_point--;
	}
	this->fix_point *= high(2, this->literal);
	for(int i = 0; i < this->literal; i++)
	{
		if (c >= (1.0f / high(2, i + 1)+ 0.0f))
		{
			this->fix_point += high(2, this->literal - i - 1);
			c -= (1.0f / high(2, i + 1)+ 0.0f);
		}
	}
}

Fixed::~Fixed(void) {std::cout << "Destructor called\n";}



// Operators

void Fixed::operator= (const Fixed &fix)
{
	std::cout << "Copy assignment operator called\n";

	this->fix_point = fix.fix_point;
}

std::ostream&	operator<<(std::ostream &output, const Fixed& fix)
{
	output << fix.toFloat();;
	return (output);
}



// ************************* Member Functions ************************* 

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return(this->fix_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fix_point = raw;
}

float	Fixed::toFloat( void ) const
{
	float ret = this->fix_point >> (this->literal);
	int c = this->fix_point % high(2, this->literal);
	
	for (int i = 0; i < this->literal; i++)
		ret += ((c % high(2, this->literal - i)) / high(2, this->literal - i - 1)) * (1 / (high(2, i + 1) + 0.0f));
	return (ret);
}

int Fixed::toInt( void ) const
{
	return (this->fix_point / high(2, this->literal));
}

