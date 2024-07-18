/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:57:22 by msukki            #+#    #+#             */
/*   Updated: 2024/07/15 16:11:30 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*letsmalloc(char ***map)
{
	char	*pointer;
	int	row;
	int	col;

	row = 0;
	col = 0;
	map = (char ***)malloc(sizeof(char **) * 100)
	while (row < 100)
	{
		map[row] = (char **)malloc(sizeof(char *) * 100)
		map[row][col] = (char *)malloc(sizeof(char) * 100)
		row++;
		col++;	
	}
	return (pointer);
}
