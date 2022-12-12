/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:19:11 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 10:40:25 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

static void	print_node(char c, t_node *node, size_t len)
{
	ft_printf("%c: ", c);
	while (len != 0)
	{
		ft_printf("%d ", node->num);
		if (len != 1)
			node = node->next;
		len--;
	}
	ft_printf("\n");
}

static void	print_node_position(t_node *node, size_t len)
{
	ft_printf("p: ");
	while (len != 0)
	{
		ft_printf("%d ", node->pos);
		if (len != 1)
			node = node->next;
		len--;
	}
	ft_printf("\n");
}

void	print_stacks(t_stack *stacks)
{
	ft_printf("========================================================\n");
	print_node('a', stacks->head_stack_a, stacks->len_a);
	print_node_position(stacks->head_stack_a, stacks->len_a);
	print_node('b', stacks->head_stack_b, stacks->len_b);
	print_node_position(stacks->head_stack_b, stacks->len_b);
	ft_printf("\n");
	ft_printf("len a: %d ", stacks->len_a);
	ft_printf("\n");
	ft_printf("len b: %d ", stacks->len_b);
	ft_printf("\n");
	ft_printf("========================================================\n");
}
