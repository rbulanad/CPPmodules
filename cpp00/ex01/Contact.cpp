/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:41:20 by rbulanad          #+#    #+#             */
/*   Updated: 2024/05/01 12:17:57 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_exist = 0;
	//std::cout << "Contact created" << std::endl;
}

Contact::~Contact()
{
	//std::cout << "Contact destroyed" << std::endl;
}

void	Contact::setFirst(std::string comtuveuxfirststuveuxouautrement)
{
	this->_firstName = comtuveuxfirststuveuxouautrement;	
}

void	Contact::setLast(std::string newlast)
{
	this->_lastName = newlast;
}
void	Contact::setNick(std::string newnick)
{
	this->_nickname = newnick;
}
void	Contact::setPhone(std::string newphone)
{
	this->_phoneNum = newphone;
}
void	Contact::setSecret(std::string newsecret)
{
	this->_darkSecret = newsecret;
}

void	Contact::setExist(int i)
{
	this->_exist = i;
}

std::string	Contact::getFirst()
{
	return this->_firstName;
}

std::string	Contact::getLast()
{
	return this->_lastName;
}

std::string	Contact::getNick()
{
	return this->_nickname;
}

std::string	Contact::getPhone()
{
	return this->_phoneNum;
}

std::string	Contact::getSecret()
{
	return this->_darkSecret;
}

int	Contact::getExist()
{
	return this->_exist;
}
