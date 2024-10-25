#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i = 0;

	if (n == 0)
	{
		return 0;
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return 0;
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}


int	main(void)
{
	char	s1[15] = "abcde";
	char	s2[15] = "abcde";
	int	result;

	result = ft_strncmp(s1, s2, 1);

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("Return value(): %d", result);
	return 0;
}
