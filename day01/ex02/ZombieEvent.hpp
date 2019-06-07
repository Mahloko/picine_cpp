/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:16:58 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 16:29:55 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();
        Zombie* newZombie(std::string);
        void    setZombieType(Zombie *zombie, std::string);
        void    randomChump(std::string type);
};

#endif