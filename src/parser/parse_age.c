/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_age.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:15:21 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 22:09:49 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

int	is_valid_age_input(int value)
{
	return (value >= 0 && value <= 99);
}

int	should_accept_age(int value)
{
	return (value >= 18 && value <= 99);
}

void	handle_age_message(int value)
{
	if (value < 0)
		printf("wtf!\n\n");
	else if (value < 18)
		printf("Sorry, this club is for climbers 18 and older.\n\n");
	else if (value > 99)
		printf("No, you're not!\n\n");
	else if (value >= 80)
		printf("Wow! Glad to see you here on your own feet!\n\n");
}

int	parse_age(char *display_msg)
{
	int		value;
	char	line[128];

	while (1)
	{
		printf("%s", display_msg);
		if (fgets(line, sizeof(line), stdin)
			&& sscanf(line, "%d", &value) == 1)
		{
			if (!is_valid_age_input(value))
			{
				handle_age_message(value);
				continue ;
			}
			if (should_accept_age(value))
				return (value);
		}
		else
			printf("Read the instructions — numbers only, "
				"no symbols!\n\n");
	}
}
