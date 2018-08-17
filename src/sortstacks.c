/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortstacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:52:12 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/16 15:06:34 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	simple_sort(t_master *m_stack)
{
	t_list	*tail_a;

	while (!is_sorted(m_stack) && STACK_A->next)
	{
		tail_a = find_tail(STACK_A);
		if (sorted_any_order(STACK_A))
			rotate_a(m_stack);
		else if (!STACK_A_SORTED)
			swap_a(m_stack);
		else if (STACK_A_CONTENT > *(int *)tail_a->content)
		{
			if (STACK_B && STACK_B->next && STACK_B_SORTED)
				rrr(m_stack);
			else
				rev_rot_a(m_stack);
		}
		if (STACK_A_CONTENT < *(int *)tail_a->content)
			push_b(m_stack);
		if (STACK_B && STACK_B->next && STACK_B_SORTED)
			rev_rot_b(m_stack);
		if (is_stack_sorted(STACK_A))
		{
			while (STACK_B)
				push_a(m_stack);
		}
	}
}

void	find_steps(t_list *stack)
{
	int		steps;
	int		size;
	int		i;
	t_list	*start;

	i = 0;
	steps = 0;
	size = list_size(stack);
	start = stack;
	while (stack)
	{
		stack->content_size = steps;
		if (i < (size / 2))
			steps++;
		else if ((i > (size / 2)) ||
				(i >= (size / 2) && (size % 2 == 0)))
			steps--;
		i++;
		stack = stack->next;
	}
	stack = start;
}