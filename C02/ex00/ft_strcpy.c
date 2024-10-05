#include <stdio.h>

char	*ft_strcpy(char *dest, char *scr)
{
	int	i = 0;
	
	while (scr[i] != '\0')
	{
		dest[i] = scr[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	scr[] = "the cake is a lie";
	char dest[] = "fica, vai ter bolo";

	printf("scr: %s\n", scr);
	ft_strcpy(dest, scr);
	printf("dest: %s\n", dest);
	return 0;
}
*/
