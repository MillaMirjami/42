/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:12:46 by msukki            #+#    #+#             */
/*   Updated: 2024/07/04 19:13:09 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ex00
#include <stdio.h>
int     main(void)
{
        char    s1[20] = "abcde";
        char    s2[20] = "abdde";

        ft_strcmp(s1, s2);
        printf("%d\n", ft_strcmp(s1, s2));
        return (0);
}

