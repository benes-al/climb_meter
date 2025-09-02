/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_climbing_potential.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:59:19 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/02 10:12:15 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

void	print_cimbing_potential(t_user_data *user, int evaluation_score)
{
	printf("\n===================== Climbing Potential ====================\n");
	if (evaluation_score == 5)
		printf("| Congratulations %s, YOU WERE BORN FOR CLIMBING     |\n",
			user->name);
	else if (evaluation_score == 4)
		printf("| Congratulations %s, YOU HAVE THE RIGHT ATTRIBUTES  |\n",
			user->name);
	else if (evaluation_score == 3)
		printf("| Congratulations %s, GREAT POTENTIAL FOR CLIMBING   |\n",
			user->name);
	else if (evaluation_score == 2)
		printf("| Congratulations %s, YOU CAN IMPROVE WITH TRAINING  |\n",
			user->name);
	else
		printf("| Congratulations %s, DEDICATION IS WHAT COUNTS MOST |\n",
			user->name);
	printf("============================================================\n");
}
