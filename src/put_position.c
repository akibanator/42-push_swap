/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:02:41 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 09:54:36 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

static void	copy_args(int argc, char *argv[], int *temp_args)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < argc - 1)
	{
		temp_args[i] = ft_atol(argv[j]);
		i++;
		j++;
	}
}

static void	put_position_stack(int *temp_pos, t_stack *stacks)
{
	size_t	i;
	t_node	*node;

	i = 0;
	node = stacks->head_stack_a;
	while (i < stacks->len_a)
	{
		node->pos = temp_pos[i];
		node = node->next;
		i++;
	}
	free(temp_pos);
}

void	put_position(int argc, char *argv[], t_stack *stacks)
{
	int	*temp_args;
	int	*temp_pos;
	int	y;
	int	x;
	int	pos;

	temp_args = malloc((argc - 1) * sizeof(int));
	temp_pos = malloc((argc - 1) * sizeof(int));
	copy_args(argc, argv, temp_args);
	y = 0;
	while (y < argc - 1)
	{
		pos = 0;
		x = 0;
		while (x < argc - 1)
		{
			if (temp_args[y] > temp_args[x] && y != x)
				pos++;
			temp_pos[y] = pos;
			x++;
		}
		y++;
	}
	free(temp_args);
	put_position_stack(temp_pos, stacks);
}
