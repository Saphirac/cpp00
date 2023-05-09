/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 21:10:03 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/09 20:40:14 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstdlib>
#include "Phonebook.hpp"

Phonebook::Phonebook(void){}
Phonebook::~Phonebook(void){}

bool	is_number(char const *str)
{
	for (int i = 0; str[i]; i++)
		if (isdigit(str[i]) == false)
			return false;
	return true;
}

void	Phonebook::add_contact()
{
	int	i = 0;
	while (i < 8 && repertory[i].index >= 0)
		i++;
	if (i == 8)
		i = 0;
	repertory[i].index = i;
	if (repertory[i].add_first_name()
		|| repertory[i].add_last_name()
		|| repertory[i].add_number()
		|| repertory[i].add_nickname()
		|| repertory[i].add_darkest_secret()
		)
	{
		std::cout << "Please input valid contact.\n";
		repertory[i].index = -1;
	}
}

void	Phonebook::search_contact()
{
	int	i = 0;
	std::string input;

	while (i < 8 && repertory[i].index >= 0)
	{
		repertory[i].print_for_search();
		i++;
	}
	std::cout << "Which one ? ";
	std::getline(std::cin, input);
	i = 0;
	while (i < 8 && repertory[i].index >= 0)
	{
		if (input.empty() || input.length() > 1)
		{
			std::cout << "Incorrect input.\n";
			return ;
		}
		if (is_number(input.data()) && atoi(input.data()) == repertory[i].index)
		{
			repertory[i].print_all();
			return ;
		}
		i++;
	}
	std::cout << "Incorrect input.\n";
}
