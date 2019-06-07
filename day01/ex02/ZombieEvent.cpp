/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:16:53 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 16:29:31 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){}

ZombieEvent::~ZombieEvent(){}

void    ZombieEvent::setZombieType(Zombie *zombie, std::string type)
{
    zombie->setType(type);
    return ;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie = new Zombie();

    zombie->setName(name);
    setZombieType(zombie, "Walker");
    return zombie;
}

void    ZombieEvent::randomChump(std::string type)
{
    int    i;
    Zombie zombie;
    std::string randZom[4] = {"Timmy", "Persant", "Jim", "Anal"};
    
    i = std::rand()% 4;
    zombie.setName(randZom[i]);
    zombie.setType(type);
    zombie.announce();
}