/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code_idea.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:32:15 by msukki            #+#    #+#             */
/*   Updated: 2024/07/07 14:41:10 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	print_grid(int ***arr, int rows, int cols)
{
	int	i;
	int	j;
	int	y;

	i = 0;
	j = 0;
	y = 0;
	while (i < rows)
	{
		while (j < cols)
		{
			printf("[");
			j++;
		
			while (y < rows)
			{
				printf("%d", arr[i][j][y]);
				y++;
			}
			y = 0;
			printf("]");
		}
		j = 0;
		printf("\n");
		i++;
	}
}

void	fill_with_potential_vals(int *arr, int highest, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i < highest)
		{
			arr[i] = i + 1;
		}
		else
		{
			arr[i] = 0;
		}
		i++;
	}
}

int	get_biggest_val(int rows, int clue, int d)
{
	return (rows - clue + 2 + d - 1);
}

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
int	min_of_four(int a, int b, int c, int d)
{
	return (min(min(a, b), min(c, d)));
}

int	get_top_clue(int *clues, int col)
{
	return (clues[col]);
}

int	get_bottom_clue(int *clues, int col)
{
	return (clues[4 + col]);
}

int	get_left_clue(int *clues, int row)
{
	return (clues[8 + row]);
}

int	get_right_clue(int *clues, int row)
{
	return (clues[12 + row]);
}

int	main(void)
{
	int	rows;
	int	cols;
	int	***array;
	int	clues[16] = {2, 1, 4, 3, 3, 4, 1, 2, 1, 2, 2, 3, 4, 3, 1, 2};
	int	c_top;
	int	c_bot;
	int	c_left;
	int	c_right;
	int	l_top;
	int	l_bot;
	int	l_left;
	int	l_right;
	int	highest_possible_val;
	int	i;
	int	j;

	i = 0;
	j = 0;
	rows = 4;
	cols = 4;
	array = (int ***)malloc(rows * sizeof(int **));
	while (i < rows)
	{
		array[i] = (int **)malloc(cols * sizeof(int *));
		while (j < cols)
		{
			array[i][j] = (int *)malloc(rows * sizeof(int)); // Each integer array has 4 elements
			j++;
		}
		j = 0;
		i++;
	}
	while (i < rows)
	{
		while (j < cols)
		{
                        c_top = get_top_clue(clues, j);
			c_bot = get_bottom_clue(clues, j);
                        c_left = get_left_clue(clues, i);
                        c_right = get_right_clue(clues, i);
                        l_top = get_biggest_val(rows, c_top, i);
                        l_bot = get_biggest_val(rows, c_bot, rows - i - 1);
                        l_left = get_biggest_val(rows, c_left, j);
                        l_right = get_biggest_val(rows, c_right, cols - j - 1);
                        highest_possible_val = min_of_four(l_top, l_bot, l_left, l_right);
                        printf("highest_possible_val for (%d, %d): %d\n", i, j,
                                highest_possible_val);
                        fill_with_potential_vals(array[i][j], highest_possible_val, rows);
			j++;
		}
		j = 0;
		i++;
	}
	printf("Grid filled with potential values:\n");
	print_grid(array, rows, cols);
	// Free allocated memory
	i = 0;
	j = 0;
	while (i < rows)
	{
		while (j < cols)
		{
			free(array[i][j]);
			j++;
		}
		j = 0;
		free(array[i]);
		i++;
	}
	free(array);
	return (0);
}
