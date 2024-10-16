#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i = 0;
	int	v;

	while(i < (size / 2))
	{
		v = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = v;
		i++;
	}
}

/*
int	main(void)
{
	int	tab[] = {21, 22, 23, 24};
	int	size = sizeof(tab) / sizeof(tab[0]);

	ft_rev_int_tab(tab, size);
	int	contador = 0;

	while (contador < size)
	{
		printf("%d\n", tab[contador]);
		contador++;
	}
	return 0;
}
*/
