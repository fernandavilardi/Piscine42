#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
	char*	first_str = "dcba";
	char*	second_str = "abcd";

	printf("First string: %s\n", first_str);
	printf("Second string: %s\n", second_str);
	printf("Return value of strcmp(): %d", ft_strcmp(first_str, second_str));
	return 0;
}
*/
