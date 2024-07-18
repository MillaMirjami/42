# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    main07                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 18:33:03 by msukki            #+#    #+#              #
#    Updated: 2024/07/16 18:33:35 by msukki           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <stdio.h>
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


