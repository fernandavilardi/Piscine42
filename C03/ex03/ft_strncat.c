#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i = 0;
	unsigned int	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	dest[10] = "Girls ";
	char	src[10] = "Gilmore";
	char	*nb = ft_strncat(dest, src, 5);
	
	printf("%s", nb);
	return 0;
}
*/
