/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:16:38 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 16:30:37 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main()
{
    ZombieEvent  obj;
    Zombie  *obj1;
    std::string str = "Tom";

    obj1 = obj.newZombie(str);
    obj1->announce();

    //initialize the random seed
    srand(time(NULL));
    
    obj.randomChump("Crawller");
    obj.randomChump("Eater");
    obj.randomChump("Jumper");
    
    delete obj1;
    return (0);
}