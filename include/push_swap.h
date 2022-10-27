/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:22:25 by akenji-a          #+#    #+#             */
/*   Updated: 2022/10/27 11:51:54 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	"../lib/libft/libft.h"
# include	"../lib/printf/ft_printf.h"
# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_node {
	int				num;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack {
	t_node	*head_stack_a;
	t_node	*head_stack_b;
	t_node	*current_stack_a;
	t_node	*current_stack_b;
}	t_stack;

int		args_parse(char **argv, t_stack *stacks);
int		build_stack_a(int num, t_stack *stacks);
void	print_stacks(t_stack *stacks);
t_node	*swap(t_node *node);
int		swap_a(t_stack *stacks);
int		swap_b(t_stack *stacks);
int		swap_ab(t_stack *stacks);
void	operation(char	*op, t_stack *stacks);
int		push_b(t_stack *stacks);
int		push_a(t_stack *stacks);
int		rotate_a(t_stack *stacks);
int		rotate_b(t_stack *stacks);
int		rotate_ab(t_stack *stacks);
int		reverse_rotate_a(t_stack *stacks);
int		reverse_rotate_b(t_stack *stacks);
int		reverse_rotate_ab(t_stack *stacks);

#endif
