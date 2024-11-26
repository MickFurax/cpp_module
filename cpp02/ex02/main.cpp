/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:15:17 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/26 13:20:53 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed/Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;                // 0
	std::cout << ++a << std::endl;              // 0.00390625
	std::cout << a << std::endl;                // 0.00390625
	std::cout << a++ << std::endl;              // 0.00390625
	std::cout << a << std::endl;                // 0.0078125
	std::cout << b << std::endl;                // 10.1016
	std::cout << Fixed::max(a, b) << std::endl; // 10.1016
	Fixed c = b;
	std::cout << c << std::endl;                // 10.1016
	return (0);
}