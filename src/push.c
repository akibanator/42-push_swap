/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:17 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/25 03:52:52 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int	push_b(t_stack *stacks)
{
	t_node	*node_tmp;

	if (stacks->head_stack_a == NULL)
		return (1);
	node_tmp = stacks->head_stack_a->next;
	if (stacks->head_stack_b == NULL)
	{
		stacks->head_stack_b = stacks->head_stack_a;
		stacks->head_stack_b->next = NULL;
		stacks->head_stack_b->prev = NULL;
		stacks->current_stack_b = stacks->head_stack_b;
	}
	else
	{
		stacks->head_stack_a->next = stacks->head_stack_b;
		stacks->head_stack_b->prev = stacks->head_stack_a;
		stacks->head_stack_b = stacks->head_stack_a;
	}
	stacks->head_stack_a = node_tmp;
	if (stacks->head_stack_a == NULL)
		return (1);
	stacks->head_stack_a->prev = NULL;
	return (0);
}

int	push_a(t_stack *stacks)
{
	t_node	*node_tmp;

	if (stacks->head_stack_b == NULL)
		return (1);
	node_tmp = stacks->head_stack_b->next;
	if (stacks->head_stack_a == NULL)
	{
		stacks->head_stack_a = stacks->head_stack_b;
		stacks->head_stack_a->next = NULL;
		stacks->head_stack_a->prev = NULL;
	}
	else
	{
		stacks->head_stack_b->next = stacks->head_stack_a;
		stacks->head_stack_a->prev = stacks->head_stack_b;
		stacks->head_stack_a = stacks->head_stack_b;
		stacks->head_stack_b->prev = NULL;
	}
	stacks->head_stack_b = node_tmp;
	if (stacks->head_stack_b == NULL)
		return (1);
	stacks->head_stack_b->prev = NULL;
	return (0);
}
