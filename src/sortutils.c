/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 09:57:19 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/16 15:02:56 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		is_stack_reversed(t_list *stack)
{
	t_list *head;

	head = stack;
	while (stack->next)
	{
		if (*(int *)stack->content < *(int *)stack->next->content)
		{
			stack = head;
			return (0);
		}
		stack = stack->next;
	}
	stack = head;
	return (1);
}

int		is_stack_sorted(t_list *stack)
{
	t_list *head;

	head = stack;
	while (stack->next)
	{
		if (*(int *)stack->content > *(int *)stack->next->content)
		{
			stack = head;
			return (0);
		}
		stack = stack->next;
	}
	stack = head;
	return (1);
}

int		is_sorted(t_master *m_stack)
{
	t_list *head;

	head = STACK_A;
	while (STACK_A->next)
	{
		if (!STACK_A_SORTED || STACK_B)
		{
			STACK_A = head;
			return (0);
		}
		STACK_A = STACK_A->next;
	}
	STACK_A = head;
	if (STACK_B)
		return (0);
	return (1);
}

int		find_highest(t_list *stack)
{
	int		highest;
	t_list	*start;

	highest = *(int *)stack->content;
	start = stack;
	while (stack)
	{
		if (*(int *)stack->content > highest)
			highest = *(int *)stack->content;
		stack = stack->next;
	}
	stack = start;
	return (highest);
}

int		find_lowest(t_list *stack)
{
	int		lowest;
	t_list	*start;

	lowest = *(int *)stack->content;
	start = stack;
	while (stack)
	{
		if (*(int *)stack->content < lowest)
			lowest = *(int *)stack->content;
		stack = stack->next;
	}
	stack = start;
	return (lowest);
}
