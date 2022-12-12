/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:27:00 by akenji-a          #+#    #+#             */
/*   Updated: 2022/12/12 11:03:31 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stacks;

	if (argc > 1)
	{
		if (!is_valid_number(argc, argv) || !is_integer(argc, argv))
		{
			ft_printf("Error\n");
			return (1);
		}
		stacks = malloc(sizeof(t_stack));
		stacks->len_a = 0;
		stacks->len_b = 0;
		build_stacks(argc, argv, stacks);
		put_position(argc, argv, stacks);
		if (has_duplicate(stacks) && stacks->len_a > 1)
			ft_printf("Error\n");
		if (!has_duplicate(stacks) && stacks->len_a > 1)
			sort((argc - 1), stacks);
		free_all(stacks);
	}
	return (0);
}
