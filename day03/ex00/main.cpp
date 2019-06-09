/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 20:04:17 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 18:10:59 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap a;
    FragTrap const b("Fele");
    FragTrap const c(b);
    FragTrap    d("Mike");
    
    a = d;
    srand(time(NULL));
    d.beReparired((unsigned int)50);
    
    return (0);
}