/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 08:40:10 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/23 08:56:31 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_all(t_master *m_stack)
{
	t_list *head;
	t_list *tail;

	head = STACK_A;
	free(m_stack->arr);
	while (head)
	{
		tail = head->next;
		free(head->content);
		free(head);
		head = tail;
	}
	STACK_A = NULL;
	STACK_B = NULL;
}
