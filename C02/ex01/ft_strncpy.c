#include <stdio.h>

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int	i = 0;

	while((str[i] != '\0') && (i < n))
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	dest[50] = "";
	char	str[] = "Hello darkness my old friend";
	unsigned	int i = 7;

	printf("str: %s\n", str);
	ft_strncpy(dest, str, i);
	printf("dest: %s\n", dest);
	return 0;
}
*/
