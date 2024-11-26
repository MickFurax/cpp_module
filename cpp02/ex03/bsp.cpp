/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:14:56 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/26 13:55:29 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed/Fixed.hpp"
#include "Point/Point.hpp"

float   area(Point const a, Point const b, Point const c)
{
    float aX = a.getX().toFloat();
    float aY = a.getY().toFloat();
    float bX = b.getX().toFloat();
    float bY = b.getY().toFloat();
    float cX = c.getX().toFloat();
    float cY = c.getY().toFloat();
    float absolute(((aX * (bY - cY) + bX * (cY - aY) + cX * (aY - bY)) / 2.0f));
    if (absolute < 0)
            absolute = absolute * -1;
	return (absolute);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
    float A = area(a, b, c);

    float A1 = area(point, b, c);
    float A2 = area(a, point, c);
    float A3 = area(a, b, point);
    return (A == A1 + A2 + A3);
}
