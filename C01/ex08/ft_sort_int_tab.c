#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size > 1)
	{
		i = 0;

		while(i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}

/*
int	main(void)
{
	int	tab[] = {7, 6, 3, 4, 2, 5};
	int	size = sizeof(tab) / sizeof(tab[0]);

	ft_sort_int_tab(tab, size);
	int	cont = 0;

	while(cont < size)
	{
		printf("%d", tab[cont]);
		cont++;
	}
	return 0;
}
*/
