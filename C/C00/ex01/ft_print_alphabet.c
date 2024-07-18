/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:40:19 by msukki            #+#    #+#             */
/*   Updated: 2024/06/27 14:12:08 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	i;

	i = 'a' ;
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}

/* int main(void)
   {
   ft_print_alphabet();
   return(0);
   }
   */
