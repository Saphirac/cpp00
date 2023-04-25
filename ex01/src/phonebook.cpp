/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 21:10:03 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/04/25 23:15:03 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "phonebook.hpp"

void	add_contact()
{
	
	for (i = 0; repertory[i])
		i++;
	if (i == 8)
		i--;
	repertory[i].index = i;
	repertory[i].add_first_name();
	repertory[i].add_last_name();
	repertory[i].add_number();
	repertory[i].add_nickname();
	repertory[i].add_darkest_secret();
}

void	search_contact()
{
	int	i = 0;
	char	*input;

	while (repertory[i])
	{
		repertory[i].print_for_search();
		i++;
	}
	std::cout << "Which one ? ";
	std::getline(std::cin, input);
	i = 0;
	while (repertory[i])
	{
		if (atoi(input) == repertory[i].index)
		{
			repertory[i].print_all();
			break ;
		}
	}
	std::cout << "Incorrect input." << std::endl;
}
