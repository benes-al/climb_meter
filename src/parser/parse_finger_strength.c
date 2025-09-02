/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_finger_strength.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:19:32 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 22:09:15 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

int	handle_finger_strength_errors(float value)
{
	if (value < 0)
	{
		printf("Negative grip strength? Are you made of jelly?\n\n");
		return (1);
	}
	if (value > 100)
	{
		printf("Whoa! Crushing steel with bare hands, are we?\n\n");
		return (1);
	}
	return (0);
}

float	parse_finger_strength(const char *display_msg, float min, float max)
{
	float	value;
	char	line[128];

	while (1)
	{
		printf("%s", display_msg);
		if (fgets(line, sizeof(line), stdin) && sscanf(line, "%f", &value) == 1)
		{
			if (handle_finger_strength_errors(value))
				continue ;
			if (value >= min && value <= max)
				return (value);
		}
		printf("Invalid input. Please enter a value between %.2f and %.2f.\n\n",
			min, max);
	}
}
