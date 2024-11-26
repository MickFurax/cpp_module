/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:09:56 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/26 14:07:56 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed/Fixed.hpp"
#include "Point/Point.hpp"
#include <iostream>

int	main(void)
{
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);
	Point point(10, 15);
	if (bsp(a, b, c, point))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;
	point = Point(1000, 0);
	if (bsp(a, b, c, point))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;
	return (0);
}