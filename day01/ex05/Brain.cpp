/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 17:05:02 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 17:41:06 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {}

Brain::~Brain() {}

std::string Brain::identify()
{
    std::stringstream s;
    
    s << this;
    return s.str();
}