/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 10:15:29 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/09 10:15:42 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_loop(t_master *m_stack)
{
	int x;

	x = 0;
	while (x < m_stack->size)
	{
		if (STACK_A)
		{
			ft_putnbr_fd(*(int *)STACK_A->content, 2);
			STACK_A = STACK_A->next;
		}
		else
			ft_putchar_fd(' ', 2);
		ft_putchar_fd('\t', 2);
		if (STACK_B)
		{
			ft_putnbr_fd(*(int *)STACK_B->content, 2);
			STACK_B = STACK_B->next;
		}
		else
			ft_putchar_fd(' ', 2);
		ft_putchar_fd('\n', 2);
		if (!STACK_A && !STACK_B)
			break ;
		x++;
	}
}

void	print_stacks(t_master *m_stack)
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = STACK_A;
	head_b = STACK_B;
	print_loop(m_stack);
	ft_putendl_fd("_\t_", 2);
	ft_putendl_fd("A\tB", 2);
	STACK_A = head_a;
	STACK_B = head_b;
}
