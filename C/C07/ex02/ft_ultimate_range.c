/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 00:17:43 by msukki            #+#    #+#             */
/*   Updated: 2024/07/15 18:03:21 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	if (min >= max)
		return (0);
	temp = (int *)malloc(sizeof(int) * (max - min));
	if (temp == NULL)
		return (-1);
	*range = temp;
	i = 0;
	while (max > min)
	{
		temp[i] = min;
		i++;
		min++;
	}
	return (i);
}
