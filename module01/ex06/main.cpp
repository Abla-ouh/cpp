/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhaga <abouhaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:28:42 by abouhaga          #+#    #+#             */
/*   Updated: 2022/12/10 16:05:30 by abouhaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	std::string moods[] = {"debug", "info", "warning", "error"};

	if (ac != 1)
	{
		int i = 0;
		for (; i < 4; i++)
			if (moods[i] == av[1])
				break;
		switch (i)
		{
			case 0:
				while(i < 4)
					harl.complain(moods[i++]);
				break;
			case 1:
				while(i < 4)
					harl.complain(moods[i++]);
				break;
			case 2:
				while(i < 4)
					harl.complain(moods[i++]);
				break;
			case 3:
				while(i < 4)
					harl.complain(moods[i++]);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
	}
}