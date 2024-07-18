/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:13:13 by msukki            #+#    #+#             */
/*   Updated: 2024/07/10 17:37:12 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	fact = 1;
	i = 1;
	if (nb < 0)
		fact = 0;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
