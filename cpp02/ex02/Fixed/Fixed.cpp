/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:15:25 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/26 09:53:19 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed() : fixed(0)
{
}

Fixed::Fixed(const int number)
{
	this->fixed = roundf(number * (1 << _bits));
}

Fixed::Fixed(const float number)
{
	this->fixed = roundf(number * (1 << _bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->fixed = rhs.getRawBits();
	return (*this);
}

// increment
Fixed &Fixed::operator++(void)
{
	this->fixed++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->fixed++;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->fixed--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	this->fixed--;
	return (tmp);
}

// arithmetic
Fixed Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

// comparison
bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

int Fixed::getRawBits(void) const
{
	return (this->fixed);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed = raw;
}
float Fixed::toFloat(void) const
{
	return (this->fixed / (float)(1 << _bits));
}

int Fixed::toInt(void) const
{
	return (this->fixed >> _bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
