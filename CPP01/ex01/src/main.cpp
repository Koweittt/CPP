/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 08:46:59 by koweit            #+#    #+#             */
/*   Updated: 2025/11/03 12:22:35 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main (void)
{
    Zombie *z;
    int number = 10;

    z = zombieHorde(number, "jack");

    for (int i = 0; i < number; i++)
        z[i].announce();
        
    delete[] z;
    return (0);
}