/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:04:33 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/09 14:57:18 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static long		conv(const char *str, int i, int m)
{
	long	a;
	int		dig;

	a = 0;
	dig = 0;
	while (ft_isdigit(str[i]))
	{
		a *= 10;
		a += str[i] - '0';
		if (m == 1 && dig > 17)
			return (-1);
		if (m == -1 && dig > 17)
			return (0);
		i++;
		dig++;
	}
	return (a);
}

long			ft_atol(const char *str)
{
	long		i;
	int			m;
	long		a;

	i = 0;
	m = 1;
	if (ft_strlen(str) > 12)
		return (2147483647U + 1);
	if (ft_strlen(str) == 0 || !str)
		return (0);
	while (ft_isspace(str[i]) || str[i] == '0')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i - 1] == '0')
			return (0);
		if (str[i] == '-')
		{
			m = -1;
		}
		i++;
	}
	a = conv(str, i, m) * m;
	return (a);
}

int				create_array(t_master *m_stack, char **new)
{
	int		x;
	long	temp;
	int		res;

	x = 0;
	while (new[x])
	{
		if ((res = digstr(new[x])) == 1)
		{
			temp = ft_atol(new[x]);
			if (temp > MAXINT || temp < MININT)
				return (0);
			m_stack->arr[x] = temp;
			res = noduplicate(m_stack->arr, x, m_stack->arr[x]);
		}
		if (res == 0)
		{
			free(m_stack->arr);
			return (0);
		}
		x++;
	}
	return (x);
}
