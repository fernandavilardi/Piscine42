#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str1[] = "Hello world";
	char	str2[] = "bye bye";

	ft_putstr(str1);
	write(1, "\n", 1);

	ft_putstr(str2);
	write(1, "\n", 1);
	
	return 0;
}
