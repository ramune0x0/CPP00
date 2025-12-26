/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haru <haru@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:13:12 by haru              #+#    #+#             */
/*   Updated: 2025/12/26 22:03:55 by haru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    PhoneBook phonebook;
    std::string command;

    while (42) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
            break;

        if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
        else if (command == "EXIT")
            break;
    }
    return 0;
}

