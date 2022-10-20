/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:25 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/20 11:53:56 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

t_node	*swap(t_node	*node)
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
	}
	return (node);
}

int		swap_a(t_stack *stacks)
{
	if (stacks->head_stack_a == NULL)
		return (1);
	stacks->head_stack_a = swap(stacks->head_stack_a);
}

int		swap_b(t_stack *stacks)
{
	if (stacks->head_stack_b == NULL)
		return (1);
	stacks->head_stack_b = swap(stacks->head_stack_b);
}

int		swap_ab(t_stack *stacks)
{
	if (stacks->head_stack_a == NULL || stacks->head_stack_b == NULL)
		return (1);
	swap_a(stacks);
	swap_b(stacks);
}