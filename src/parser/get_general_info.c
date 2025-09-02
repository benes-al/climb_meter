/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_general_info.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 19:15:57 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/01 20:34:05 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "climb_meter.h"

void	get_general_info(t_user_data *user)
{
	parse_name("Enter your name: ", user->name, MAX_NAME_LENGTH);
	user->age = parse_age("Enter age: ");
	user->height = parse_height(
			"Enter your height (in meters, e.g. 1.75): ",
			1.50, 1.90);
}
