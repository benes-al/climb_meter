/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_name.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:14:02 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 22:07:58 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

int	is_char_valid(char *name)
{
	int	i;

	i = 0;
	while (name[i])
	{
		if (isdigit(name[i]))
			return (1);
		if (!isalpha(name[i]))
			return (2);
		i++;
	}
	return (0);
}

void	print_name_error(int validation_code)
{
	if (validation_code == 1)
	{
		printf("Are you a robot climber from the future?\n"
			"Names aren't supposed to have numbers!\n\n");
	}
	else if (validation_code == 2)
	{
		printf("Whoa there! Are you trying to hack the\n"
			"climbing system with special chars?\n"
			"No secret codes please!\n\n");
	}
}

void	parse_name(char *display_msg, char *name, int size)
{
	int	validation_result;

	while (1)
	{
		printf("%s", display_msg);
		fgets(name, size, stdin);
		name[strcspn(name, "\n")] = '\0';
		if (strlen(name) == 0)
		{
			printf("Nice try, mysterious climber... "
				"but we need a name!\n\n");
			continue ;
		}
		validation_result = is_char_valid(name);
		if (validation_result != 0)
		{
			print_name_error(validation_result);
			continue ;
		}
		break ;
	}
}
