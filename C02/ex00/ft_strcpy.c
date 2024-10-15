#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i = 0;
	
	//Copia cada caractere da string src para dest
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	//Adiciona o caractere nulo ao final da string copiada
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	src[] = "the cake is a lie";
	char	dest[50] = "fica, vai ter bolo";

	printf("src: %s\n", src);
	ft_strcpy(dest, src);
	printf("dest: %s\n", dest);
	return 0;
}
*/
