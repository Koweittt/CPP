/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:05:01 by koweit            #+#    #+#             */
/*   Updated: 2025/11/03 12:22:05 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *array;

    array = new Zombie[N];
    if (!array)
    {
        std::cout << "Allocation Problem" << std::endl;
        return (NULL);
    }
    for (int i = 0; i < N; i++)
    {
        array[i].setName(name);
    }
    return (array);
}
