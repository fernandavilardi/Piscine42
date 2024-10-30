#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	if (size > 0)
	{
		unsigned int	j;
		
		for (j = 0; j < size - 1 && src[j] != '\0'; j++)
		{
			dest[j] = src[j];
		}
		dest[j] = '\0';
	}
	return i;
}

int	main(void)
{
	char	src[] = "the cake is a lie";
	char	dest[20];

	printf("src: %s\n", src);
	unsigned int	len = ft_strlcpy(dest, src, sizeof(dest));
	
	printf("dest: %s\n", dest);
	printf("comprimento de src: %u\n", len);
	return 0;
}