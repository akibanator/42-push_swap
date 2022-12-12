/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:47:22 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 06:54:53 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int	rotate_a(t_stack *stacks)
{
	if (stacks->len_a < 2)
		return (1);
	stacks->current_stack_a->next = stacks->head_stack_a;
	stacks->current_stack_a->next->prev = stacks->current_stack_a;
	stacks->head_stack_a = stacks->head_stack_a->next;
	stacks->head_stack_a->prev = NULL;
	stacks->current_stack_a->next->next = NULL;
	stacks->current_stack_a = stacks->current_stack_a->next;
	ft_printf("ra\n");
	return (0);
}

int	rotate_b(t_stack *stacks)
{
	if (stacks->len_b < 2)
		return (1);
	stacks->current_stack_b->next = stacks->head_stack_b;
	stacks->current_stack_b->next->prev = stacks->current_stack_b;
	stacks->head_stack_b = stacks->head_stack_b->next;
	stacks->head_stack_b->prev = NULL;
	stacks->current_stack_b->next->next = NULL;
	stacks->current_stack_b = stacks->current_stack_b->next;
	ft_printf("rb\n");
	return (0);
}

int	rotate_ab(t_stack *stacks)
{
	rotate_a(stacks);
	rotate_b(stacks);
	return (0);
}
