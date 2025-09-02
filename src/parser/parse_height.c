/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_height.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:16:31 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 22:08:55 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

int	handle_height_errors(float value)
{
	if (value < 0)
	{
		printf("Are you upside down?\n\n");
		return (1);
	}
	if (value < 1.5)
	{
		printf("Grow up!\n\n");
		return (1);
	}
	if (value > 1.90)
	{
		printf("Hello from down here!\n\n");
		return (1);
	}
	return (0);
}

float	parse_height(const char *display_msg, float min, float max)
{
	float	value;
	char	line[128];

	while (1)
	{
		printf("%s", display_msg);
		if (fgets(line, sizeof(line), stdin) && sscanf(line, "%f", &value) == 1)
		{
			if (handle_height_errors(value))
				continue ;
			if (value >= min && value <= max)
				return (value);
		}
		printf("Typing 'tall' doesn't help.\n"
			"We need actual meters!\n\n");
	}
}
