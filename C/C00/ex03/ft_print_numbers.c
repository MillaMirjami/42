/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:32:34 by msukki            #+#    #+#             */
/*   Updated: 2024/06/27 15:04:42 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	z;

	z = '0';
	while (z <= '9')
	{
		write(1, &z, 1);
		z++;
	}
}

/* int main(void)
{
	ft_print_numbers();
	return(0);
}
*/
