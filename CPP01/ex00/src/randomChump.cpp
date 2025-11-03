/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 08:47:02 by koweit            #+#    #+#             */
/*   Updated: 2025/11/03 11:36:14 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

void Zombie::setName(std::string name)
{
    _name = name;
}

void randomChump(std::string name)
{
    Zombie z;
    
    z.setName(name);
    z.announce();
}