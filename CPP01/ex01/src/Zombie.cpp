/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 08:47:04 by koweit            #+#    #+#             */
/*   Updated: 2025/11/03 12:05:28 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "A zombie has been created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "A zombie has been destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
    _name = name;
}

void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}