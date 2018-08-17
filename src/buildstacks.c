/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buildstacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 17:11:35 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/08 09:33:52 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*find_tail(t_list *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	build_stacks(t_master *m_stack)
{
	int		i;
	t_list	*head;
	t_list	*temp;

	i = 0;
	STACK_B = NULL;
	while (i < m_stack->size)
	{
		temp = ft_lstnew(&(m_stack->arr[i]), sizeof(int));
		if (i == 0)
		{
			STACK_A = temp;
			head = STACK_A;
		}
		else
		{
			ft_lstaddend(&STACK_A, temp);
			STACK_A = STACK_A->next;
		}
		i++;
	}
	STACK_A = head;
}
