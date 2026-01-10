/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haru <haru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:00:29 by haru              #+#    #+#             */
/*   Updated: 2025/12/26 22:01:51 by haru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string& s)
{
    firstName = s;
}

void Contact::setLastName(const std::string& s)
{
    lastName = s;
}
void Contact::setNickname(const std::string& s)
{
    nickname = s;
}

void Contact::setPhoneNumber(const std::string& s)
{
    phoneNumber = s;
}

void Contact::setDarkestSecret(const std::string& s)
{
    darkestSecret = s;
}

std::string Contact::getFirstName() const
{
    return firstName;
}

std::string Contact::getLastName() const
{
    return lastName;
}

std::string Contact::getNickname() const
{
    return nickname;
}

std::string Contact::getPhoneNumber() const
{
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return darkestSecret;
}
