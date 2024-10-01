#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b; //Armazena o resultado da divisão inteira de a por b no endereço apontado por div
	*mod = a % b; //Armazena o resto da divisão de a por b no endereço apontado por mod
}

/*
int	main(void)
{
	int	a = 10;
	int 	b = 2;
	int 	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod); //Passa os endereços de div e mod
	printf("%d %d", div, mod);
	return 0;
}
*/
