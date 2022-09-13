/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbruggem <fbruggem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:29:24 by afenzl            #+#    #+#             */
/*   Updated: 2022/09/13 14:11:58 by fbruggem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int high(int i, int e)
{
	int n = 1;
	if (e < 0)
		return (0);
	while (e--)
		n *= i;
	return (n);
}

// ************************* constructor and destructor **************************

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";

	this->fix_point = 0;
}

Fixed::Fixed(const Fixed &fix)
{
	std::cout << "Copy constructor called\n";
	
	*this = Fixed(fix.getRawBits());
}


Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	
	this->fix_point = n << this->literal;
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

// destructor
Fixed::~Fixed(void) {std::cout << "Destructor called\n";}


// ***************************** functions ***********************************
int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return(this->fix_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->fix_point = raw;
}

// Conersions
float	Fixed::toFloat( void ) const
{
	return ((float) (this->fix_point / (float) (1 << this->literal)));
}

int Fixed::toInt( void ) const
{
	return (this->fix_point >> this->literal);
}

// Max min

const Fixed&	Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
	return((fix1.getRawBits() < fix2.getRawBits())? fix1 : fix2);
}

const Fixed&	Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
	return((fix1.getRawBits() > fix2.getRawBits())? fix1 : fix2);
}

const int&	Fixed::min(const int& fix1, const int& fix2)
{
	return(fix1 < fix2 ? fix1 : fix2);
}

const int&	Fixed::max(const int& fix1, const int& fix2)
{
	return(fix1 > fix2 ? fix1 : fix2);
}

// ************************* operator overloads *********************************

void Fixed::operator= (const Fixed &fix)
{
	std::cout << "Copy assignment operator called\n";

	this->fix_point = fix.fix_point;
}

std::ostream&	operator<< (std::ostream &output, const Fixed& fix)
{
	output << fix.toFloat();
	return (output);
}

// *********************** comparison overloads ************************************
bool	Fixed::operator < (const Fixed &fix)
{
	return (fix.getRawBits() < this->getRawBits());
}

bool	Fixed::operator > ( Fixed &fix)
{
	return (fix.getRawBits() > this->getRawBits());
}

bool	Fixed::operator >= (Fixed &fix)
{
	return (fix.getRawBits() >= this->getRawBits());
}

bool	Fixed::operator <= (Fixed &fix)
{
	return (fix.getRawBits() <= this->getRawBits());
}

bool	Fixed::operator == (const Fixed &fix)
{
	return (fix.getRawBits() == this->getRawBits());
}

bool	Fixed::operator != ( Fixed &fix)
{
	return (fix.getRawBits() != this->getRawBits());
}

// ******************************* binary arithmetic overloads **********************
Fixed	Fixed::operator + ( const Fixed &fix)
{
	return (Fixed(this->fix_point + fix.fix_point));
}

Fixed	Fixed::operator - ( const Fixed &fix)
{
	return (Fixed(this->fix_point - fix.fix_point));
}

Fixed	Fixed::operator * ( const Fixed &fix)
{
	return (Fixed(this->fix_point * fix.fix_point));
}

Fixed	Fixed::operator / ( const Fixed &fix)
{
	return (Fixed(this->fix_point / fix.fix_point));
}

// ******************************* increment and decrement overloads **********************
Fixed	Fixed::operator++ (void)
{
	this->fix_point += 1;
	return (*this);
}

Fixed	Fixed::operator-- (void)
{
	this->fix_point -= 1;
	return (*this);
}

Fixed	Fixed::operator++ (int)
{	
	Fixed f(this->getRawBits());
	this->fix_point += 1;
	return (f);
}

Fixed	Fixed::operator-- (int)
{
	Fixed f(this->getRawBits());
	this->fix_point -= 1;
	return (f);
}


// Helper Functions

int	Fixed::getBit(int index) const 
{
	if (index < 0 || index > 31)
		return (0);
	return ((this->fix_point >> index) & 1);
}