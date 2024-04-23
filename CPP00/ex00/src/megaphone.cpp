/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 14:28:17 by kposthum      #+#    #+#                 */
/*   Updated: 2023/10/18 17:39:12 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (size_t j = 0; argv[i][j] != '\0'; j++)
				argv[i][j] = std::toupper(argv[i][j]);
			std::cout << argv[i];
		}
		std::cout << "\n";
	}
	return (0);
}
