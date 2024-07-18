/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khasi <khasi@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:49:34 by khasi             #+#    #+#             */
/*   Updated: 2024/07/14 14:55:24 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	***dict_malloc(int argc, char *argv[])
{
	int		row;
	char	***dictionary;

	if ((argc < 2) || (argc > 3))
		ft_putstr("Error\n");
	if (argc < 0)
		ft_putstr("Error\n");
	row = 0;
	dictionary = (char ***)malloc(sizeof(char **) * 100);
	while (row < 50)
	{
		dictionary[row] = (char **)malloc(sizeof(char *) * 2);
		dictionary[row][0] = (char *)malloc(sizeof(char) * 50);
		dictionary[row][1] = (char *)malloc(sizeof(char) * 50);
		row++;
	}
	return (dictionary);
}
/*
t_dict *open_dictionary(char *dict_path)
{
	int	fd;
	char	*tab;
	int	buffer;
	char	line;
	
	fd = open(dict_path, O_RDONLY);
	if (fd == -1)
	{
		write (1, "Error when open the file\n", 25);
		return (0);
	}
	else
	line = read(fd, buffer, 100000);
	return(line);
}*/
