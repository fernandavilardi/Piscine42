#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i = 0;
	int	j = 0;

	if(to_find[0] == '\0')
		return str;

	while (str[i] != '\0')
	{
		if(str[i] == to_find[0])
		{
			j = 0;

			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				j++;

			if(to_find[j] == '\0')
				return &str[i];
		}
		i++;
	}
	return NULL;
}

/*
int	main(void)
{
	char	str[] = "This is halloween";
	char	to_find[] = "festa";

	char	*result = ft_strstr(str, to_find);

	if(result)
		printf("Substring encontrada: %s\n", result);
	else
		printf("Substring não encontrada \n");
	return 0;
}
*/
