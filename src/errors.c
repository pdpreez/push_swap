/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 14:14:09 by ppreez            #+#    #+#             */
/*   Updated: 2018/08/17 11:14:10 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int		digstr(char *str)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str);
	if (str[0] == '-' || str[0] == '+')
	{
		if (len == 1)
			return (0);
		i++;
	}
	while (ft_isdigit(str[i]))
		i++;
	return (i == len);
}

char	*strjoinspace(char *s1, char *s2)
{
	char *temp;

	temp = ft_strjoin(s1, s2);
	free(s1);
	s1 = ft_strjoin(temp, " ");
	free(temp);
	return (s1);
}

int		noduplicate(int *arr, int size, int comp)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == comp)
			return (0);
		i++;
	}
	return (1);
}

int		arrify(t_master *m_stack, char *str)
{
	int		x;
	int		i;
	char	**new;

	x = 0;
	new = ft_strsplit(str, ' ');
	free(str);
	while (new[x])
		x++;
	m_stack->arr = (int *)ft_memalloc(sizeof(int) * x);
	x = create_array(m_stack, new);
	m_stack->size = x;
	i = x;
	while (i >= 0)
	{
		free(new[i]);
		i--;
	}
	free(new);
	return (x > 0);
}

int		errorhandler(t_master *m_stack, int argc, char **argv)
{
	char	*new;
	int		index;
	int		res;

	index = 0;
	new = ft_strnew(0);
	while ((index + 1) < argc)
	{
		new = strjoinspace(new, argv[index + 1]);
		index++;
	}
	res = arrify(m_stack, new);
	return (res);
}
