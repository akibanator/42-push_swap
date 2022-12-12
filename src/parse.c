/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:27:30 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 10:54:40 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int	is_valid_number(int argc, char *argv[])
{
	int	i;
	int	y;

	i = 1;
	y = 0;
	while (i < argc)
	{
		while (argv[i][y])
		{
			if (argv[i][y] == '-')
				y++;
			else if (ft_isdigit(argv[i][y]))
				y++;
			else
				return (0);
		}
		y = 0;
		i++;
	}
	return (1);
}

int	is_integer(int argc, char *argv[])
{
	long	num;
	int		i;

	i = 1;
	while (i < argc)
	{
		num = ft_atol(argv[i]);
		if (num < MIN_INT || num > MAX_INT)
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicate(t_stack *stacks)
{
	size_t	i;
	size_t	j;
	t_node	*current_node_x;
	t_node	*current_node_y;

	i = stacks->len_a;
	current_node_x = stacks->head_stack_a;
	current_node_y = stacks->head_stack_a->next;
	while (i > 1)
	{
		j = i - 1;
		while (j-- > 0)
		{
			if (current_node_x->num == current_node_y->num)
				return (1);
			if (j > 0)
				current_node_y = current_node_y->next;
		}
		if (i == 2)
			return (0);
		current_node_x = current_node_x->next;
		current_node_y = current_node_x->next;
		i--;
	}
	return (0);
}

int	is_sorted(t_stack *stacks)
{
	size_t	i;
	t_node	*node;

	i = 1;
	node = stacks->head_stack_a;
	while (i < stacks->len_a)
	{
		if (node->num > node->next->num)
			return (0);
		node = node->next;
		i++;
	}
	return (1);
}
