/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:54:10 by msukki            #+#    #+#             */
/*   Updated: 2024/07/01 19:02:12 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*#include <stdio.h>

int	main(void)
{
	int a = 11;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);
	printf("div = %d, mod = %d\n", a, b);
	return(0);
}*/
