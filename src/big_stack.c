/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 04:53:09 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 09:55:26 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

static int	ft_bit_significant(int number, int i)
{
	return ((number >> i) & 1);
}

static void	ft_sort_by_bit(t_stack *stacks, int i)
{
	size_t	j;
	size_t	temp_len_a;

	j = 0;
	temp_len_a = stacks->len_a;
	while (j < temp_len_a)
	{
		if (ft_bit_significant(stacks->head_stack_a->pos, i))
			rotate_a(stacks);
		else
			push_b(stacks);
		j++;
	}
}

void	radix_sort(t_stack *stacks)
{
	int		i;

	i = 0;
	while (!is_sorted(stacks))
	{
		ft_sort_by_bit(stacks, i);
		while (stacks->len_b)
			push_a(stacks);
		i++;
	}
}
