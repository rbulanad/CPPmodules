/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbulanad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:48 by rbulanad          #+#    #+#             */
/*   Updated: 2024/04/22 18:41:59 by rbulanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int	i = 0;
		while (++i < argc)
		{
			int	j = -1;
			while (argv[i][++j])
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
		}
		std::cout << std::endl;
	}
	else
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*" << std::endl;
	return 0;
}
