/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_climber_attributes.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 18:59:46 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 21:46:58 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

void	get_climbing_attributes(t_user_data *user)
{
	user->arm_span = parse_arm_span(
			"Enter your arm span ----------------------------------------\n\n"
			"(Arm span is the distance from fingertip to fingertip\n"
			"when your arms are fully extended horizontally to the\n"
			"sides — like forming a \"T\" shape with your body.)\n"
			"\n"
			"Enter value in meters (e.g. 1.80): ",
			1.50, 1.90);
	user->finger_strength = parse_finger_strength(
			"Enter finger strength (0–100): ", 0.0, 100.0);
}
