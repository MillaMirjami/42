/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrohde <jrohde@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 12:52:21 by jrohde            #+#    #+#             */
/*   Updated: 2024/06/30 21:18:27 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

extern void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((col == 0 && row == 0) || (col == x - 1 && row == y -1))
			{
				ft_putchar('A');
			}
			else if ((col == 0 && row == y - 1) || (col == x - 1 && row == 0))
			{
				ft_putchar('C');
			}
			else if (row == 0 || row == y - 1 || col == 0 || col == x - 1)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			col++;
		}	
		ft_putchclearar('\n');
	}
}
