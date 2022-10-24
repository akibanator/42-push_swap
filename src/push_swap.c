/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:21:41 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/24 16:08:28 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../include/push_swap.h"

int		main(int argc, char *argv[])
{
	t_stack	*stacks;

	stacks = malloc(sizeof(t_stack));
	if (argc > 1)
	{
		if (args_parse(++argv, stacks))
		{
			ft_printf("Fez\n");
			print_stacks(stacks);
			operation("pb", stacks);
			ft_printf("Depois do push\n");
			print_stacks(stacks);
		}
		else
			ft_printf("Nao fez\n");
	}
	return (0);
}
