
char *ft_strjoin(int size,char **strs,char *sep);
#include <stdio.h>
#include <stdlib.h>
int     main(void)
{
        char    *strs[5];

        strs[0] = "Pls";
        strs[1] = "just";
        strs[2] = "leave";
        strs[3] = "me";
        strs[4] = "alone";

	char *str = ft_strjoin(5, strs, " ");

        printf("%s", ft_strjoin(5, strs, " "));
	free(str);
        return 0;
 
}


