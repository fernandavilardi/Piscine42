#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int	main(void)
{
	int	a = 50;
	int	b = 101;

	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
*/
