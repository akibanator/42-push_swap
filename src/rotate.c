/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:22 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/24 16:07:27 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int		rotate_a(t_stack *stacks)
{
	t_node	*temp_node;

	if (stacks->head_stack_a == NULL || stacks->head_stack_a->next == NULL)
		return (1);
	stacks->current_stack_a->prev->next = stacks->head_stack_a;
	stacks->head_stack_a->prev = stacks->current_stack_a->prev;
	stacks->current_stack_a->next = stacks->head_stack_a->next;
	stacks->head_stack_a->next = NULL;
	stacks->current_stack_a->prev = NULL;
	temp_node = stacks->head_stack_a;
	stacks->head_stack_a = stacks->current_stack_a;
	stacks->current_stack_a = temp_node;
	return (0);
}

int		rotate_b(t_stack *stacks)
{
	t_node	*temp_node;

	if (stacks->head_stack_b == NULL || stacks->head_stack_b->next == NULL)
		return (1);
	stacks->current_stack_b->prev->next = stacks->head_stack_b;
	stacks->head_stack_b->prev = stacks->current_stack_b->prev;
	stacks->current_stack_b->next = stacks->head_stack_b->next;
	stacks->head_stack_b->next = NULL;
	stacks->current_stack_b->prev = NULL;
	temp_node = stacks->head_stack_b;
	stacks->head_stack_b = stacks->current_stack_b;
	stacks->current_stack_b = temp_node;
	return (0);
}

int		rotate_ab(t_stack *stacks)
{
	rotate_a(stacks);
	rotate_b(stacks);
	return (0);
}