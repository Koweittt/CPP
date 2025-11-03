/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:24:57 by koweit            #+#    #+#             */
/*   Updated: 2025/11/03 22:30:23 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

void Weapon::setType(std::string type)
{
    _type = type;
}

const std::string Weapon::getType(void) const
{
    return (_type);
}

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon(void) {}