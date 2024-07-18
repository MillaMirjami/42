/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:46:21 by msukki            #+#    #+#             */
/*   Updated: 2024/07/01 17:25:13 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
int	main(void)
{
	int a = 5;
	int b = 10;
	printf("a = %d, b = %d\n", a, b);

	ft_swap(&a, &b);
	printf("a %d, b = %d", a, b);
	return(0);
}*/
