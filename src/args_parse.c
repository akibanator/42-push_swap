/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:55:47 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/25 03:55:06 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

static int	is_not_valid_number(char *argv)
{
	while (*argv)
	{
		if (*argv == '-')
			*(argv++);
		else if (ft_isdigit(*argv))
			*(argv++);
		else
			return (1);
	}
	return (0);
}

static int	is_not_integer(char *argv, t_stack *stacks)
{
	long	temp_number;

	temp_number = ft_atol(argv);
	if (temp_number < MIN_INT || temp_number > MAX_INT)
		return (1);
	if (build_stack_a(temp_number, stacks))
		return (1);
	return (0);
}

static int	has_duplicate(t_stack *stacks)
{
	t_node	*current_node_x;
	t_node	*current_node_y;

	if (stacks->head_stack_a->next == NULL)
		return (1);
	current_node_x = stacks->head_stack_a;
	current_node_y = stacks->head_stack_a->next;
	while (current_node_x != NULL)
	{
		while (current_node_y != NULL)
		{
			if (current_node_x->num == current_node_y->num)
				return (1);
			current_node_y = current_node_y->next;
		}
		current_node_x = current_node_x->next;
		if (current_node_x->next == NULL)
			return (1);
		else
			current_node_y = current_node_x->next;
	}
	return (0);
}

int	args_parse(char **argv, t_stack *stacks)
{
	while (*argv)
	{
		if (is_not_valid_number(*argv))
			return (0);
		if (is_not_integer(*argv, stacks))
			return (0);
		*argv++;
	}
	if (has_duplicate(stacks))
		return (0);
	return (1);
}
