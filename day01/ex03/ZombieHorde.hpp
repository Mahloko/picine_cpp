/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:56:22 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 15:43:24 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include "Zombie.hpp"
# include <iostream>
# include <string>

class ZombieHorde
{
    public:
        ZombieHorde(int);
        ~ZombieHorde();
        void    announce();
        
    private:
        int     _N;
        Zombie **_store;
};

#endif