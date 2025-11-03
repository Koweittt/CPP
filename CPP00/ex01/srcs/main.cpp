/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 05:16:18 by koweit            #+#    #+#             */
/*   Updated: 2025/11/02 05:16:19 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

void SearchFunction(PhoneBook phonebook)
{
    std::string input;
    int         number;
    phonebook.displayContact();
    while (1)
    {
        std::cout << "Enter the index of the contact to display : ";
        if (!std::getline(std::cin, input))
        {
            std::cout << "Erreur du programme" << std::endl;
            return ;
        }
        std::istringstream iss(input);
        if (iss >> number && iss.eof())
        {
            if (number > phonebook.getIndex() || number < 1)
            {
                std::cout << "Please enter a correct index" << std::endl;
                continue ;
            }
            phonebook.displayOneContact(number);
            break;
        }
    }
}

int main(void)
{
    PhoneBook   phonebook;
    std::string input;
    while (1)
    {
        std::cout << "Enter your command (ADD/SEARCH/EXIT)" << std::endl;
        std::cout << ">";
        if (!std::getline(std::cin, input))
        {
            std::cout << "Erreur, fin du programme" << std::endl;
            return (-1);
        }
        else if (input == "EXIT")
            break ;
        else if (input == "ADD")
            phonebook.ADD();
        else if (input == "SEARCH")
        {
            SearchFunction(phonebook);
        }
    }
    std::cout << "Fin du programme" << std::endl;
}