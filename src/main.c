/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 10:52:02 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 20:21:52 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

int	main(void)
{
	t_user_data	user;

	while (1)
	{
		system("clear || cls");
		print_main_menu();
		get_general_info(&user);
		get_climbing_attributes(&user);
		evaluate_climber(&user);
	}
	return (0);
}
