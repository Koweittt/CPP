/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 04:49:23 by koweit            #+#    #+#             */
/*   Updated: 2025/11/02 05:16:07 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"

class PhoneBook
{
    private:
        Contact _contacts[8];
        int     _index;

    public:
        PhoneBook();
        ~PhoneBook();
        void    ADD();
        void    displayContact();
        void    displayOneContact(int i);
        int     getIndex();
};

#endif //PHONEBOOK_HPP

