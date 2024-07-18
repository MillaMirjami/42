/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:31:26 by msukki            #+#    #+#             */
/*   Updated: 2024/06/27 14:29:06 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char	i;

	i = 'z';
	while (i >= 'a')
	{	
		write(1, &i, 1);
		i--;
	}
}

/* int main(void)
{
   ft_print_reverse_alphabet();
   return(0);
}
*/
