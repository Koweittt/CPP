/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 08:47:06 by koweit            #+#    #+#             */
/*   Updated: 2025/11/03 12:07:18 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void        announce(void);
        void        setName(std::string name);
        std::string getName(void);

    private:
        std::string _name;
};

Zombie *zombieHorde(int N, std::string name);

#endif //ZOMBIE_HPP