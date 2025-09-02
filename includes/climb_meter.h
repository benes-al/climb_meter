/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   climb_meter.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benes-al <benes-al@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:53:19 by benes-al          #+#    #+#             */
/*   Updated: 2025/09/02 10:11:53 by benes-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIMB_METER_H
# define CLIMB_METER_H

/******************************************************************************/
/*                              INCLUDES                                      */
/******************************************************************************/

// standard libraries
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

// macros
# define MAX_NAME_LENGTH 30

/******************************************************************************/
/*                               STRUCTS                                      */
/******************************************************************************/

typedef struct s_user_data
{
	char	name[MAX_NAME_LENGTH];
	int		age;
	float	height;
	float	arm_span;
	float	finger_strength;
	float	ape_index;
}	t_user_data;

/******************************************************************************/
/*                               PARSER                                       */
/******************************************************************************/

void	get_general_info(t_user_data *user);
void	get_climbing_attributes(t_user_data *user);
int		parse_age(char *display_msg);
float	parse_arm_span(const char *display_msg, float min, float max);
float	parse_finger_strength(const char *display_msg, float min, float max);
float	parse_height(const char *display_msg, float min, float max);
void	parse_name(char *display_msg, char *buffer, int size);

/******************************************************************************/
/*                               PROGRAM                                      */
/******************************************************************************/

void	evaluate_climber(t_user_data *user);

/******************************************************************************/
/*                               TABLES                                       */
/******************************************************************************/

void	print_main_menu(void);
void	print_finger_strength(t_user_data *user);
void	print_evaluation_result(t_user_data *user);
void	print_cimbing_potential(t_user_data *user, int evaluation_score);
void	print_ape_index(t_user_data *user);

#endif