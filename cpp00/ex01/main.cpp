/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:09:40 by rbulanad          #+#    #+#             */
/*   Updated: 2024/05/06 12:25:51 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <sstream>

static int stoi( std::string & s )
{
    int i;
    std::istringstream(s) >> i;
    return i;
}

int	checker(std::string index)
{
	int	x = -1;

	while (index[++x])
	{
		if (index[x] < 48 || index[x] > 57)
			return 1;
	}
	return 0;
}

int	main (void)
{

	PhoneBook repertory;
	
	std::string	n;
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	phone;
	std::string	secret;
	Contact	temp;

	int	i = 0;
	while (1)
	{
		if (i >= 8)
			i = 0;
		std::cout << "Enter ADD, SEARCH or EXIT." << std::endl;
		if (!(std::getline(std::cin, n, '\n'))) //for ctrl-d
			break ;
		if (n == "ADD")
		{
			std::cout << "First Name: ";
			std::getline(std::cin, first, '\n');
			std::cout << "Last Name: ";
			std::getline(std::cin, last, '\n');
			std::cout << "Nickname: ";
			std::getline(std::cin, nick, '\n');
			std::cout << "Phone Number: ";
			std::getline(std::cin, phone, '\n');
			std::cout << "Darkest Secret: ";
			std::getline(std::cin, secret, '\n');
			temp.setFirst(first);
			temp.setLast(last);
			temp.setNick(nick);
			temp.setPhone(phone);
			temp.setSecret(secret);
			repertory.addContact(temp, i);
			i++;
		}
		if (n == "SEARCH")
		{
			std::cout << std::setfill (' ') << std::setw(10) << "Index";
			std::cout << std::setfill (' ') << std::setw(10) << "FirstName";
			std::cout << std::setfill (' ') << std::setw(10) << "LastName";
			std::cout << std::setfill (' ') << std::setw(10) << "Nickname" << std::endl;
			int	y = 0;
			std::string	index;
			int	realindex;
			while (++y <= 8)
			{
				first = repertory.getTab(y - 1).getFirst();
				if (first.size() > 10) first.erase(10, -1), first[9] = '.';
				last = repertory.getTab(y - 1).getLast();
				nick = repertory.getTab(y - 1).getNick();
				std::cout << std::setfill (' ') << std::setw(10) << y;
				std::cout << '|';
				std::cout << std::setfill (' ') << std::setw(10) << (first) ? first : NULL;
				std::cout << '|';
				std::cout << std::setfill (' ') << std::setw(10) << (last) ? last : NULL;
				std::cout << '|';
				std::cout << std::setfill (' ') << std::setw(10) << (nick) ? nick : NULL;
				std::cout << std::endl;
			}
			while (stoi(index) < 1 || stoi(index) > 8)
			{
				std::cout << "Select an index for more details." << std::endl;
				if (std::getline(std::cin, index, '\n'))
				{
					if (checker(index) == 0)
					{
						realindex = stoi(index);
						repertory.showContact(realindex - 1);
					}
					else
						std::cout << "No" << std::endl;
				}
				else
					break ;
			}
		}
		if (n == "EXIT")
			break ;
	}
	
	return (0);
}
