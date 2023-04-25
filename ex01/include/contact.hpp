/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtoi <mcourtoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 04:17:53 by mcourtoi          #+#    #+#             */
/*   Updated: 2023/04/25 23:33:02 by mcourtoi         ###   ########.fr       */
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
public:
	int		index;
	char	*access_first_name();
	char	*access_last_name();
	char	*access_nickname();
	char	*access_number();
	char	*access_darkest_secret();

	void	add_first_name();
	void	add_last_name();
	void	add_nickname();
	void	add_number();
	void	add_darkest_secret();
	void	add_index(int i);

	void	print_all();
	void	print_for_search();
	void	truncate(std::string field);
};

#endif
