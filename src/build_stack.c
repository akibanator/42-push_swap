/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:30:18 by akenji-a          #+#    #+#             */
/*   Updated: 2022/11/21 18:37:11 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

void	build_stacks(int argc, char *argv[], t_stack *stacks)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (i == 1)
		{
			stacks->head_stack_a = malloc(sizeof(t_node));
			stacks->head_stack_a->num = ft_atol(argv[i]);
			stacks->current_stack_a = stacks->head_stack_a;
		}
		else
		{
			stacks->current_stack_a->next = malloc(sizeof(t_node));
			stacks->current_stack_a->next->prev = stacks->current_stack_a;
			stacks->current_stack_a = stacks->current_stack_a->next;
			stacks->current_stack_a->num = ft_atol(argv[i]);
		}
		stacks->len_a++;
		i++;
	}
}
