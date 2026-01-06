/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haru <haru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:02:32 by haru              #+#    #+#             */
/*   Updated: 2025/12/26 22:12:09 by haru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>

PhoneBook::PhoneBook() : count(0) {
}

static std::string readField(const std::string& prompt) {
    std::string s;
    while (s.empty()) {
        std::cout << prompt;
        if (!std::getline(std::cin, s))
            exit(0);
    }
    return s;
}

void PhoneBook::add() {
    int index = count % 8;
    Contact& c = contacts[index];

    c.setFirstName(readField("First name: "));
    c.setLastName(readField("Last name: "));
    c.setNickname(readField("Nickname: "));
    c.setPhoneNumber(readField("Phone number: "));
    c.setDarkestSecret(readField("Darkest secret: "));

    count++;
}

static void printColumn(const std::string& s) {
    if (s.length() > 10)
        std::cout << std::setw(10) << s.substr(0, 9) + ".";
    else
        std::cout << std::setw(10) << s;
}

void PhoneBook::search() const {
    int total = count < 8 ? count : 8;

    if (total == 0) {
        std::cout << "PhoneBook is empty\n";
        return;
    }

    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "first name" << "|";
    std::cout << std::setw(10) << "last name" << "|";
    std::cout << std::setw(10) << "nickname" << "\n";

    for (int i = 0; i < total; i++) {
        std::cout << std::setw(10) << i << "|";
        printColumn(contacts[i].getFirstName()); std::cout << "|";
        printColumn(contacts[i].getLastName());  std::cout << "|";
        printColumn(contacts[i].getNickname());  std::cout << "\n";
    }

    std::cout << "Index: ";
    std::string input;
    if (!std::getline(std::cin, input))
        return;
    if (input.empty()) {
        std::cout << "Invalid index\n";
        return;
    }
    for (size_t i = 0; i < input.length(); i++) {
        if (!std::isdigit(input[i])) {
            std::cout << "Invalid index\n";
            return;
        }
    }
    int idx = std::atoi(input.c_str());
    if (idx < 0 || idx >= total) {
        std::cout << "Invalid index\n";
        return;
    }

    std::cout << "First name: " << contacts[idx].getFirstName() << "\n";
    std::cout << "Last name: " << contacts[idx].getLastName() << "\n";
    std::cout << "Nickname: " << contacts[idx].getNickname() << "\n";
    std::cout << "Phone number: " << contacts[idx].getPhoneNumber() << "\n";
    std::cout << "Darkest secret: " << contacts[idx].getDarkestSecret() << "\n";
}
