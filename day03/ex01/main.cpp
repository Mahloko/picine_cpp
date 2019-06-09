/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 20:04:17 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 06:19:04 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap a("Mike");
    FragTrap b(a);
    FragTrap c("Ekim");
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    b.meleeAttack("Tom");
    b.rangedAttack("moT");
        
    return (0);
}