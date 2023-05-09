/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 04:17:53 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/05/09 20:40:04 by mcourtoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_number;
	std::string	_darkest_secret;
	
	void	_truncate(std::string field);
public:
	Contact();
	~Contact();
	int		index;

	int	add_first_name();
	int	add_last_name();
	int	add_nickname();
	int	add_number();
	int	add_darkest_secret();

	void	print_all();
	void	print_for_search();
};

#endif
