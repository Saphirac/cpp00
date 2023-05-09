/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 22:33:06 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/09 18:32:54 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int const ac, char const *const *const av)
{
	size_t	i = 0;
	size_t	j;

	if (ac > 1)
	{
		while (av[++i])
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << (char)(std::toupper(av[i][j]));
				j++;
			}
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
