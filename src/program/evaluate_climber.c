/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluate_climber.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:48:17 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/02 10:09:07 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

void	evaluate_climber(t_user_data *user)
{
	int		evaluation_score;
	float	difference;

	evaluation_score = 0;
	difference = user->arm_span - user->height;
	user->ape_index = difference;
	print_evaluation_result(user);
	print_finger_strength(user);
	print_ape_index(user);
	if (user->ape_index > 0.05)
		evaluation_score += 2;
	else if (user->ape_index > 0)
		evaluation_score += 1;
	if (user->finger_strength >= 80)
		evaluation_score += 2;
	else if (user->finger_strength >= 60)
		evaluation_score += 1;
	if (user->age >= 16 && user->age <= 30)
		evaluation_score += 1;
	print_cimbing_potential(user, evaluation_score);
	printf("\nPress Enter to return to the main menu...");
	getchar();
}
