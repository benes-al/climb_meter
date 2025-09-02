/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_evaluation_result.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:50:09 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 20:22:34 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

void	print_evaluation_result(t_user_data *user)
{
	printf("\n========== Evaluation Result ==========\n");
	printf("Name: %s\n", user->name);
	printf("Age: %d years\n", user->age);
	printf("Height: %.2f m\n", user->height);
	printf("Arm Span: %.2f m\n", user->arm_span);
	printf("Finger Strength: %.2f / 100\n", user->finger_strength);
	printf("Ape Index (The Ape Index is a measurement\n");
	printf("used in climbing, to evaluate reach advantage): %.2f m\n",
		user->ape_index);
}
