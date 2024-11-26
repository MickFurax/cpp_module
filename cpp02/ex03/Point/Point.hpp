/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:11:26 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/26 13:57:55 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "../Fixed/Fixed.hpp"

class Point
{
  private:
	Fixed const x;
	Fixed const y;

  public:
	Point();
	Point(const float x, const float y);
	Point(Point const &src);
	~Point();

	Point &operator=(Point const &rhs);

	Fixed const &getX() const;
	Fixed const &getY() const;
};

// check if point is inside triangle
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif