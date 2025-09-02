/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_finger_strenght.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 14:51:31 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 20:29:38 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

void	print_finger_strength(t_user_data *user)
{
	printf("\n----------------- Finger Strength Evaluation ----------------\n");
	if (user->finger_strength >= 50)
		printf("| RESULT: STRONG ENOUGH TO HOLD ON!                       |\n");
	else
		printf("| RESULT: YOUR GRIP IS WEAK. YOUR BAD.                    |\n");
	printf("------------------------------------------------------------\n");
}
