/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:33:26 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/07 16:03:08 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const & src);
        ~Fixed(void);
        Fixed&  operator=(Fixed const & rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
    private:
        int _fixed;
        static const int _bits;
};

std::ostream	&operator<<(std::ostream & o, Fixed const & i);

#endif