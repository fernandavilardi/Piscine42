#include <stdio.h>

char	*ft_strcat(char *dest, char *scr)
{
	int	i = 0;
	int	j = 0;

	while (dest[i] != '\0')
	i++;
	{
		while (scr[j] != '\0')
		{
			dest [i + j] = scr[j];
			j++;
		}
		dest[i + j] = '\0';
		return (dest);
	}
}

/*
int	main(void)
{
	char	dest[50] = "oi!";
	char	scr[50] = "Bom dia!";

	ft_strcat(dest, scr);
	printf("dest: %s\n", dest);
	return 0;
}
*/
