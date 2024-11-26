/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabeman <arabeman@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:15:34 by arabeman          #+#    #+#             */
/*   Updated: 2024/11/26 09:47:43 by arabeman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int fixed;
	static const int _bits;

  public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(Fixed const &src);
	~Fixed();

	Fixed &operator=(Fixed const &rhs);

	// increment
	Fixed &operator++(void); // pre-increment ++a;
	Fixed operator++(int);   // post-increment a++;
	Fixed &operator--(void); // pre-decrement --a;
	Fixed operator--(int);   // post-decrement a--;

	// arithmetic
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;

	// comparison
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);

	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif