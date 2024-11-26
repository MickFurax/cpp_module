/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:11:21 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/26 14:06:23 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}
Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(Point const &src): x(src.getX()), y(src.getY())
{
}

Point::~Point()
{
}

Point &Point::operator=(const Point &rhs)
{
    const_cast<Fixed&>(this->x) = rhs.getX();
    const_cast<Fixed&>(this->y) = rhs.getY();

    return *this;
}

Fixed const &Point::getX() const
{
	return (this->x);
}

Fixed const &Point::getY() const
{
	return (this->y);
}
