#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		++i;

	return i;
}

int	main(void)
{
	char	str1[] = "Hello world!";
	char	str2[] = "bye bye";
	char	str3[] = "";
	char	str4[] = "1234567890";

	printf("Comprimento de \"%s\": %d\n", str1, ft_strlen(str1));
	printf("Comprimento de \"%s\": %d\n", str2, ft_strlen(str2));
	printf("Comprimento de \"%s\": %d\n", str3, ft_strlen(str3));
	printf("Comprimento de \"%s\": %d\n", str4, ft_strlen(str4));

	return 0;
}
