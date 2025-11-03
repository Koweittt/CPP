/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 05:16:16 by koweit            #+#    #+#             */
/*   Updated: 2025/11/02 05:16:17 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.hpp"

int Contact::getIndex()
{
    return _index;
}

std::string Contact::getFname()
{
    return _fname;
}

std::string Contact::getLname()
{
    return _lname;
}

std::string Contact::getNname()
{
    return _nname;
}

std::string Contact::getSecret()
{
    return _secret;
}

void Contact::setIndex(int i)
{
    _index = i;
}

void Contact::setFname(std::string s)
{
    _fname = s;
}

void Contact::setLname(std::string s)
{
    _lname = s;
}

void Contact::setNname(std::string s)
{
    _nname = s;
}

void Contact::setSecret(std::string s)
{
    _secret = s;
}