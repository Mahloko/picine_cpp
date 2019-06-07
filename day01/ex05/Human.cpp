/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:22:05 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 17:52:22 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

Brain  &Human::getBrain()
{
    return (brain);
}

std::string Human::identify()
{
    return (brain.identify());
}