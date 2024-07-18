/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc08.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 23:07:41 by msukki            #+#    #+#             */
/*   Updated: 2024/07/17 23:07:56 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     main(void)
{
        int     size;
        char    *array[3];

        array[0] = "Moi";
        array[1] = " miten";
        array[2] = " menee?";
        size = 3;
        ft_show_tab(ft_strs_to_tab(size, array));
        return (0);
}
