#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int	i = 0;
	
	while(str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			
			char	a = "0123456789abcdef"[str[i] / 16];
			char	b = "0123456789abcdef"[str[i] % 16];

			write(1, &a, 1);
			write(1, &b, 1);
		}
		i++;
	}
}

int	main(void)
{
	char	*str = "Ola\nesta bem?";
	
	printf("%s,\n", "Ola esta bem?");

	ft_putstr_non_printable(str);
	return 0;
}
