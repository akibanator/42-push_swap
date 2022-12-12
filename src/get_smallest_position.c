/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_smallest_position.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:47:48 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 08:59:24 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

static long	get_smallest_number(t_stack *stacks)
{
	size_t	i;
	long	smallest_number;
	t_node	*node;

	i = 0;
	smallest_number = stacks->head_stack_a->num;
	node = stacks->head_stack_a;
	while (i < stacks->len_a)
	{
		if (smallest_number > node->num)
				smallest_number = node->num;
		node = node->next;
		i++;
	}
	return (smallest_number);
}

long	get_smallest_number_position(t_stack *stacks)
{
	size_t	i;
	long	smallest_number;
	t_node	*node;

	i = 1;
	smallest_number = get_smallest_number(stacks);
	node = stacks->head_stack_a;
	while (i < stacks->len_a)
	{
		if (node->num == smallest_number)
			break ;
		i++;
		node = node->next;
	}
	return (i);
}
