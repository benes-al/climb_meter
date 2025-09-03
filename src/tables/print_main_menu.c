/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_main_menu.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:41:34 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 17:09:03 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

void	print_main_menu(void)
{
	printf("============================================================\n");
	printf("|               Climbers Club \"climb_meter\"                |\n");
	printf("|----------------------------------------------------------|\n");
	printf("|           Please enter your details below:               |\n");
	printf("|                                                          |\n");
	printf("| 1. Name                                                  |\n");
	printf("| 2. Age...............(years)                             |\n");
	printf("| 3. Height............(meters, e.g. 1.75)                 |\n");
	printf("| 4. Arm Span..........(meters, e.g. 1.80)                 |\n");
	printf("| 5. Finger Strength...(0 - 100)                           |\n");
	printf("============================================================\n");
}
