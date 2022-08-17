/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:39:05 by akenji-a          #+#    #+#             */
/*   Updated: 2022/08/16 17:42:03 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

void	print_stacks(t_stack *stacks)
{
	t_node	*current_node_a;
	t_node	*current_node_b;

	current_node_a = stacks->head_stack_a;
	current_node_b = stacks->head_stack_b;
	while (current_node_a != NULL || current_node_b != NULL)
	{
		if (current_node_a != NULL)
		{
			ft_printf("a: %d ", current_node_a->num);
			current_node_a = current_node_a->next;
		}
		if (current_node_b != NULL)
		{
			ft_printf("b: %d ", current_node_b->num);
			current_node_b = current_node_b->next;
		}
		ft_printf("\n");
	}
}
