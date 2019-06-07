/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahloko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 18:36:37 by mmahloko          #+#    #+#             */
/*   Updated: 2019/06/06 18:36:39 by mmahloko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon{
    public:
        Weapon(std::string);
        Weapon(void);
        ~Weapon(void);
        void         setType(std::string);
        std::string  getType(void) const;
    
    private:
        std::string _type;
};

#endif