/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 20:04:17 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/08 16:55:18 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int main(void)
{
    FragTrap a("Mike");
    NinjaTrap b("Will");
    a.meleeAttack("Tom");
    b.ninjaShoebox(a);
    return (0);
}