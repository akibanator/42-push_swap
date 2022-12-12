/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:47:07 by akenji-a          #+#    #+#             */
/*   Updated: 2022/11/21 18:11:15 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

void	free_node(t_node *node, size_t len)
{
	t_node	*node_temp;

	while (len != 0)
	{
		if (len == 1)
			free(node);
		else
		{
			node_temp = node->next;
			free(node);
			node = node_temp;
		}
		len--;
	}
}

int	free_all(t_stack *stacks)
{
	free_node(stacks->head_stack_a, stacks->len_a);
	free_node(stacks->head_stack_b, stacks->len_b);
	free(stacks);
	return (0);
}
