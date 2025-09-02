/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ape_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:53:33 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 20:24:27 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

void	print_ape_index(t_user_data *user)
{
	printf("\n---------------------- Ape Index Evaluation -----------------\n");
	if (user->ape_index > 0)
		printf("| RESULT: POSITIVE APE INDEX – YOU HAVE A REACH ADVANTAGE |\n");
	else
		printf("| RESULT: NEGATIVE APE INDEX – DON'T WORRY, IT'S OVERRATED|\n");
	printf("-------------------------------------------------------------\n");
}
