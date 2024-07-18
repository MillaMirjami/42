/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukki <msukki@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:11:16 by msukki            #+#    #+#             */
/*   Updated: 2024/07/03 23:08:00 by msukki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ex00
#include <stdio.h>

int     main(void)
{
        char *to;

        char *from;

        from = "Hi there";
        ft_strcpy(to, from);
        printf("%s\n", to);
        return(0);
}

ex01
#include <stdio.h>
int     main(void)
{
        char *to;

        char *from;

        from = "hahahahahhahahahhahahahahahahahhaha";
        int     n;

        ft_strncpy(to, from, 200);
        printf("%s\n", to);
        return(0);
}

ex02
#include <stdio.h>
int     main(void)
{
        char *abc;

        char *empty;

        char *other;

        abc = "Moikku";
        empty = "";
        other = "&070";

        ft_str_is_alpha(abc);
        printf("%d\n", ft_str_is_alpha(abc));

        ft_str_is_alpha(empty);
        printf("%d\n", ft_str_is_alpha(empty));

        ft_str_is_alpha(other);
        printf("%d\n", ft_str_is_alpha(other));


        return(0);
}

ex03
#include <stdio.h>

int     main(void)
{
        char    *digits;

        char    *empty;

        char    *other;

        digits = "12345";
        empty = "";
        other = "hh87eh&^";

        ft_str_is_numeric(digits);
        printf("%d\n", ft_str_is_numeric(digits);

        ft_str_is_numeric(empty);
        printf("%d\n", ft_str_is_numeric(empty);

        ft_str_is_numeric(other);
        printf("%d\n", ft_str_is_numeric(other);
        return (0);
}

ex04
#include <stdio.h>

int     main(void)
{
        char    *low;

        char    *empty;

        char    *other;

        low = "moikkuu";
        empty = "";
        other = "HAHHA";

        ft_str_is_lowercase(low);
        printf("%d\n", ft_str_is_lowercase(low));

        ft_str_is_lowercase(empty);
        printf("%d\n", ft_str_is_lowercase(empty));

        ft_str_is_lowercase(other);
        printf("%d\n", ft_str_is_lowercase(other));
        return (0);
}

ex05
#include <stdio.h>

int     main(void)
{
        char    *upper;

        char    *empty;

        char    *other;

        upper = "MOIKKU";
        empty = "";
        other = "moikku";

        ft_str_is_uppercase(upper);
        printf("%d\n", ft_str_is_uppercase(upper));

        ft_str_is_uppercase(empty);
        printf("%d\n", ft_str_is_uppercase(empty));

        ft_str_is_uppercase(other);
        printf("%d\n", ft_str_is_uppercase(other));
        return (0);
}

ex06
#include <stdio.h>
int     main(void)
{
        char    *printable;

        char    *empty;

        printable = "Moi!222";
        empty = "";

        ft_str_is_printable(printable);
        printf("%d\n", ft_str_is_printable(printable));

        ft_str_is_printable(empty);
        printf("%d\n", ft_str_is_printable(empty));
        return (0);
}

ex07
#include <stdio.h>
int     main(void)
{
        char    str[] = "moi";
        ft_strupcase(str);
        printf("%s", str);
        return (0);
}

ex08
#include <stdio.h>
int     main(void)
{
        char    lista[200] = "MaNsiKKA";

        ft_strlowcase(lista);
        printf("%s", lista);
        return (0);
}
