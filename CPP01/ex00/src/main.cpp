/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 08:46:59 by koweit            #+#    #+#             */
/*   Updated: 2025/11/03 11:39:53 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main (void)
{
    Zombie *z1;
    
    z1 = newZombie("joe");
    randomChump("jack");
    z1->announce();
    z1->announce();
    delete z1;
    return (0);
}