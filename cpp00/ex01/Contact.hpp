/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:24:45 by rbulanad          #+#    #+#             */
/*   Updated: 2024/05/01 12:16:33 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNum;
	std::string	_darkSecret;
	int			_exist;

	public:
	Contact();	//construct
	~Contact();	//destruct

	//setters
	void	setFirst(std::string comtuveuxfirststuveuxouautrement);
	void	setLast(std::string newlast);
	void	setNick(std::string newnick);
	void	setPhone(std::string newphone);
	void	setSecret(std::string setsecret);
	void	setExist(int i);

	//getters
	std::string	getFirst();
	std::string	getLast();
	std::string	getNick();
	std::string	getPhone();
	std::string	getSecret();
	int			getExist();

};
