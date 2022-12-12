/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:25 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 06:53:38 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

t_node	*swap(t_node *node, size_t len)
{
	t_node	*temp_node;

	if (node->next != NULL)
	{
		temp_node = node;
		node = node->next;
		temp_node->prev = node;
		temp_node->next = node->next;
		node->prev = NULL;
		node->next = temp_node;
		if (len > 2)
			node->next->next->prev = temp_node;
	}
	return (node);
}

int	swap_a(t_stack *stacks)
{
	if (stacks->len_a > 1)
	{
		stacks->head_stack_a = swap(stacks->head_stack_a, stacks->len_a);
		ft_printf("sa\n");
	}
	return (0);
}

int	swap_b(t_stack *stacks)
{
	if (stacks->len_b > 1)
	{
		stacks->head_stack_b = swap(stacks->head_stack_b, stacks->len_b);
		ft_printf("sb\n");
	}
	return (0);
}

int	swap_ab(t_stack *stacks)
{
	swap_a(stacks);
	swap_b(stacks);
	return (0);
}
