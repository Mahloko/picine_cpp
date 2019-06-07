/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:55:46 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 16:06:51 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int     main()
{
    srand(time(NULL));
    ZombieHorde zombie = ZombieHorde(20);
    zombie.announce();
    return (0);
}