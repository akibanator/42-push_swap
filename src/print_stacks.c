/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:39:05 by akenji-a          #+#    #+#             */
/*   Updated: 2022/08/12 17:06:41 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

void	print_stacks(t_stack *stacks)
{
	t_node	*current_node;

	current_node = stacks->head_stack_a;
	while (current_node != NULL)
	{
		if (current_node->prev == NULL)
			ft_printf("Nothing prev value for the first node\n");
		else
			ft_printf("Prev Node: %d\n", current_node->prev->num);
		ft_printf("Current Node: %d\n", current_node->num);
		current_node = current_node->next;
	}
}
