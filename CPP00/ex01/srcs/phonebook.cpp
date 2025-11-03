/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 05:16:21 by koweit            #+#    #+#             */
/*   Updated: 2025/11/02 05:22:33 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

//Ajouter un troncage;
//Gerer les Espaces;

PhoneBook::PhoneBook()
{
    _index = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::ADD()
{
    Contact new_contact;
    std::string buffer;

    std::cout << "Please insert the first name of the new contact" << std::endl;
    std::getline(std::cin, buffer);
    new_contact.setFname(buffer);

    std::cout << "Please insert the last name of the new contact" << std::endl;
    std::getline(std::cin, buffer);
    new_contact.setLname(buffer);

    std::cout << "Please insert the nickname of the new contact" << std::endl;
    std::getline(std::cin, buffer);
    new_contact.setNname(buffer);

    std::cout << "Please insert the darkest secret of the new contact" << std::endl;
    std::getline(std::cin, buffer);
    new_contact.setSecret(buffer);

    _contacts[_index % 8] = new_contact;
    _index++;
}

void PhoneBook::displayContact()
{
    if (!_index)
    {
        std::cout << "Please insert a contact first" << std::endl;
        return ;
    }
    std::cout << "-------------------------------------------" << std::endl;
	std::cout << "|    Index|First name| Last name| Nickname|" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        if (i >= _index)
            break;
        std::cout << "|" << std::setw(10) << std::right <<  i + 1;
        std::cout << "|" << std::setw(10) << std::right <<  _contacts[i].getFname();
        std::cout << "|" << std::setw(10) << std::right <<  _contacts[i].getLname();
        std::cout << "|" << std::setw(10) << std::right <<  _contacts[i].getNname() << "|" << std::endl;
        std::cout << "-------------------------------------------" << std::endl;
    }
}

void PhoneBook::displayOneContact(int i)
{
    if (i > _index)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    std::cout << "-------------------------------------------" << std::endl;
	std::cout << "|    Index|First name| Last name| Nickname|" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
    std::cout << "|" << std::setw(10) << std::right <<  i;
    std::cout << "|" << std::setw(10) << std::right <<  _contacts[i - 1].getFname();
    std::cout << "|" << std::setw(10) << std::right <<  _contacts[i - 1].getLname();
    std::cout << "|" << std::setw(10) << std::right <<  _contacts[i - 1].getNname() << "|" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
}

int PhoneBook::getIndex()
{
    return _index;
}