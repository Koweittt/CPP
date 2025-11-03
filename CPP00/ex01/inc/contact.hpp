/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koweit <koweit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 05:16:12 by koweit            #+#    #+#             */
/*   Updated: 2025/11/02 05:16:13 by koweit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>

class Contact
{
    private:
        int         _index;
        std::string _fname;
        std::string _lname;
        std::string _nname;
        std::string _secret;

    public:
        int getIndex();
        std::string getFname();
        std::string getLname();
        std::string getNname();
        std::string getSecret();

        void setIndex(int i);
        void setFname(std::string f);
        void setLname(std::string l);
        void setNname(std::string n);
        void setSecret(std::string s);
};