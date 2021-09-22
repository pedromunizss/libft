#include <stdio.h>
#include <bsd/string.h>
#include "/home/pedro/libft/libft.h"

int main()
{
    char dest[30]; memset(dest, 0, 30);
	char dest_original[30]; memset(dest_original, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';

    // teste 1
	if(ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B"))
        printf("sucess\n");
    else
		printf("fail\n");

	// teste 2
	dest[0] = 'B';
	dest_original[0] = 'B';
	size_t	len_ft;

	len_ft = ft_strlcat(dest, src, 1);
	if(ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B"))
	 	printf("sucess\n");
	else
	{
		printf("fail\n");
		printf("dest = %s\n", dest);
		printf("ft_strlcat = %zu\n", len_ft);
		printf("strlcat = %zu\n", strlcat(dest_original, src, 1));
		printf("dest = %s\n", dest_original);
	}

	// teste 3
	memset(dest, 'B', 4);
	memset(dest_original, 'B', 4);
	if(ft_strlcat(dest, src, 3) == 3 + strlen(src) && !strcmp(dest, "BBBB"))
		printf("sucess\n");
	else
		printf("fail\n");
	strlcat(dest_original, src, 3);
	// teste 4
	if(ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"))
		printf("sucess\n");
	else
	{
		printf("fail\n");
		printf("dest = %s\n", dest);
		printf("ft_strlcat = %zu\n", len_ft);
		printf("strlcat = %zu\n", strlcat(dest_original, src, 6));
		printf("dest_original = %s\n", dest_original);
	}
	
	// teste 5
	memset(dest, 0, 30);
	printf("length dest = %zu\n", ft_strlen(dest));
	if(ft_strlcat(dest, "123", 0) == 3 && !strcmp(dest, ""))
		printf("sucess\n");
	else
		printf("fail\n");
	printf("dest = %s\n", dest);
	printf("length dest after = %zu\n", ft_strlen(dest));
	
	return (0);
}