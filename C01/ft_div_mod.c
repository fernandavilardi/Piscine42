#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	a = 10;
	int	b = 2;
	int	div = 0;
	int	mod = 0;
	int	*pdiv = &div;
	int	*pmod = &mod;

	ft_div_mod(a, b, pdiv, pmod);
	printf("%d %d", div, mod);
	return 0;
}
*/
