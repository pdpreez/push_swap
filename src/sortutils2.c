/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortutils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 15:41:26 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/19 18:11:28 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		list_size(t_list *stack)
{
	int		i;
	t_list	*start;

	i = 0;
	start = stack;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int		dist_cont(t_list *stack, int cont)
{
	int		dist;
	t_list	*start;

	start = stack;
	dist = 0;
	while (*(int *)stack->content != cont)
	{
		stack = stack->next;
		dist++;
	}
	stack = start;
	return (dist);
}

int		sorted_any_order(t_list *stack)
{
	int		sort;
	t_list	*head;

	sort = 0;
	head = stack;
	while (stack->next)
	{
		if (*(int *)stack->content > *(int *)stack->next->content)
			sort++;
		stack = stack->next;
	}
	if (sort == 1)
	{
		if (*(int *)stack->content > *(int *)head->content)
			sort++;
	}
	stack = head;
	return (sort <= 1);
}

void	rot_max_b(t_master *m_stack)
{
	int lowest;
	int	dist;
	int	size;

	if (STACK_B && STACK_B->next)
	{
		size = list_size(STACK_B);
		lowest = find_highest(STACK_B);
		dist = dist_cont(STACK_B, lowest);
		while (STACK_B_CONTENT != lowest)
		{
			if (dist < (size / 2))
				rotate_b(m_stack);
			else
				rev_rot_b(m_stack);
		}
	}
}
