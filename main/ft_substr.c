#include <stdio.h>
#include <string.h>
#include "/home/pedro/libft/libft.h"

int main()
{
    char *s = ft_substr("tripouille", 100, 1);
	printf("length s = %zu\n", ft_strlen(s + 100));
    if(!strcmp(s, ""))
        printf("sucess\n");
    else
        printf("fail\n");
    printf("s = %s", s);
	/* 6 */ //mcheck(s, 1); free(s); showLeaks();
    return (0);
}