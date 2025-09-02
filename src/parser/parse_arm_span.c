/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arm_span.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:18:12 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 22:09:34 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

int	handle_arm_span_errors(float value)
{
	if (value < 0)
	{
		printf("Are your arms in another dimension?\n\n");
		return (1);
	}
	if (value < 1.5)
	{
		printf("That's T-Rex level reach!\n\n");
		return (1);
	}
	if (value > 1.90)
	{
		printf("You could hug a tree… from two meters away!\n\n");
		return (1);
	}
	return (0);
}

float	parse_arm_span(const char *display_msg, float min, float max)
{
	float	value;
	char	line[128];

	while (1)
	{
		printf("%s", display_msg);
		if (fgets(line, sizeof(line), stdin) && sscanf(line, "%f", &value) == 1)
		{
			if (handle_arm_span_errors(value))
				continue ;
			if (value >= min && value <= max)
				return (value);
		}
		printf("Invalid input. Please enter a value between %.2f and %.2f.\n\n",
			min, max);
	}
}
