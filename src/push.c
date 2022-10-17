/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:17 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/17 19:51:05 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int		push_b(t_stack *stacks)
{
	t_node	*node_tmp;

	node_tmp = stacks->head_stack_a->next;
	if (stacks->head_stack_b == NULL)
	{
		stacks->head_stack_b = stacks->head_stack_a;
		stacks->head_stack_b->next = NULL;
		stacks->head_stack_b->prev = NULL;
	}
	else
	{
		stacks->head_stack_a->next = stacks->head_stack_b;
		stacks->head_stack_b->prev = stacks->head_stack_a;
		stacks->head_stack_b = stacks->head_stack_a;
		stacks->current_stack_a->prev = NULL;
	}
	stacks->head_stack_a = node_tmp;
	stacks->head_stack_a->prev = NULL;
}