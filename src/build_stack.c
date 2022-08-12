/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:33:37 by akenji-a          #+#    #+#             */
/*   Updated: 2022/08/12 16:51:20 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int	build_stack_a(int num, t_stack *stacks)
{
	if (stacks->head_stack_a == NULL)
	{
		stacks->head_stack_a = malloc(sizeof(t_node));
		stacks->head_stack_a->num = num;
		stacks->head_stack_a->prev = NULL;
		stacks->head_stack_a->next = NULL;
		stacks->current_stack_a = stacks->head_stack_a;
	}
	else
	{
		stacks->current_stack_a->next = malloc(sizeof(t_node));
		stacks->current_stack_a->next->prev = stacks->current_stack_a;
		stacks->current_stack_a = stacks->current_stack_a->next;
		stacks->current_stack_a->num = num;
	}
	return (0);
}
