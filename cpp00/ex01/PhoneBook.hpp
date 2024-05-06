/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:22:18 by rbulanad          #+#    #+#             */
/*   Updated: 2024/04/30 14:43:07 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	private:
	Contact _tab[8];

	public:
	PhoneBook();	//construct
	~PhoneBook();	//destruct

	Contact	getTab(int i); //getters
	
	void	addContact(Contact contact, int i);
	void	showContact(int i);
};
