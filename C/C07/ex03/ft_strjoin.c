/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:25:47 by msukki            #+#    #+#             */
/*   Updated: 2024/07/16 21:14:53 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	lengthall(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	storage;

	storage = 0;
	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
		}
		storage += j;
		i++;
	}
	while (sep[k] != '\0')
	{
		k++;
	}
	storage += k * (size -1);
	return (storage);
}

void	ft_strncat(int size, char **strs, char *sep, char *space)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			space[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size -1)
		{
			space[k++] = sep[j++];
		}
		i++;
	}
	space[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*space;

	if (size == 0)
	{
		space = (char *)malloc(sizeof(char));
		*space = 0;
		return (space);
	}
	space = (char *)malloc(sizeof(char) * lengthall(size, strs, sep));
	if (space == 0)
		return (NULL);
	ft_strncat(size, strs, sep, space);
	return (space);
}
#include <stdio.h>
#include <stdlib.h>
int     main(void)
{
        char    *strs[5];

        strs[0] = "Pls";
        strs[1] = "just";
        strs[2] = "leave";
        strs[3] = "me";
        strs[4] = "alone";

        printf("%s", ft_strjoin(5, strs, " "));
        return 0;

}
