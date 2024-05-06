/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:54:07 by rbulanad          #+#    #+#             */
/*   Updated: 2024/05/06 11:49:37 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	//std::cout << "PhoneBook created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	//std::cout << "PhoneBook destroyed" << std::endl;
}

Contact	PhoneBook::getTab(int i)
{
	return this->_tab[i];
}

void	PhoneBook::addContact(Contact contact, int i)
{
	this->_tab[i] = contact;
	_tab[i].setExist(1);
}

void	PhoneBook::showContact(int i)
{
	if (i < 0 || i > 7)
		std::cout << "Out of range" << std::endl;
	else if (this->_tab[i].getExist() == 0)
		std::cout << "No contact found" << std::endl;
	else
	{
		std::cout << std::endl;
		std::cout << "First Name: " << this->_tab[i].getFirst() << std::endl;
		std::cout << "Last Name: " << this->_tab[i].getLast() << std::endl;
		std::cout << "Nickname: " << this->_tab[i].getNick() << std::endl;
		std::cout << "Phone Number: " << this->_tab[i].getPhone() << std::endl;
		std::cout << "Darkest Secret: " << this->_tab[i].getSecret() << std::endl;
		std::cout << std::endl;
	}
}
