/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:13:38 by msukki            #+#    #+#             */
/*   Updated: 2024/07/17 23:18:54 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dupe;
	int		i;

	i = 0;
	dupe = (char *)malloc(sizeof(char) * (ft_length(str) +1));
	if (dupe == NULL)
		return (dupe);
	while (str[i] != '\0')
	{
		dupe[i] = str[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*pp;

	pp = malloc(sizeof(struct s_stock_str) * (ac +1));
	if (pp == NULL)
		return (pp);
	i = 0;
	while (i < ac)
	{
		pp[i].size = ft_length(av[i]);
		pp[i].str = av[i];
		pp[i].copy = ft_strdup(av[i]);
		i++;
	}
	pp[i].str = 0;
	return (pp);
}
