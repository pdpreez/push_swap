/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checktest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 10:26:45 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/07 16:50:56 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	checker(t_master *m_stack, char *line)
{
	if (!ft_strcmp("pa", line))
		pa(m_stack);
	else if (!ft_strcmp("pb", line))
		pb(m_stack);
	else if (!ft_strcmp("sa", line))
		sa(m_stack);
	else if (!ft_strcmp("sb", line))
		sb(m_stack);
	else if (!ft_strcmp("ss", line))
		ss(m_stack);
	else if (!ft_strcmp("ra", line))
		ra(m_stack);
	else if (!ft_strcmp("rb", line))
		rb(m_stack);
	else if (!ft_strcmp("rr", line))
		rr(m_stack);
	else if (!ft_strcmp("rra", line))
		rra(m_stack);
	else if (!ft_strcmp("rrb", line))
		rrb(m_stack);
	else if (!ft_strcmp("rrr", line))
		rrr(m_stack);
}

int		valid_line(char *line)
{
	if (!ft_strcmp("pa", line) || !ft_strcmp("pb", line) ||
			!ft_strcmp("sa", line) || !ft_strcmp("sb", line) ||
			!ft_strcmp("ss", line) || !ft_strcmp("ra", line) ||
			!ft_strcmp("rb", line) || !ft_strcmp("rr", line) ||
			!ft_strcmp("rra", line) || !ft_strcmp("rrb", line) ||
			!ft_strcmp("rrr", line))
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	t_master	m_stack;
	char		*line;

	line = NULL;
	if ((errorhandler(&m_stack, argc, argv)) && m_stack.size > 0 && argc > 1)
	{
		build_stacks(&m_stack);
		while (get_next_line(0, &line))
		{
			if (!valid_line(line))
			{
				ft_putendl("Error");
				return (0);
			}
			checker(&m_stack, line);
		}
		if (is_sorted(&m_stack))
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	else
		ft_putendl("Error");
	return (0);
}
