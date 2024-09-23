#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int 	n2;
	
	//Loop para o primeiro número
	for (n1 = 0; n1 <= 98; n1++)
	{
		//Loop para o segundo número
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			//Imprimir o primeiro número com dois dígitos
			ft_putchar(n1 / 10 + '0'); //Primeira casa decimal de n1
			ft_putchar(n1 % 10 + '0'); //Segunda casa decimal de n1

			ft_putchar(' '); //Espaço entre os dois números

			//Imprimir o segundo número com dois dígitos
			ft_putchar(n2 / 10 + '0'); //Primeira casa decimal de n2
			ft_putchar(n2 % 10 + '0'); //Segunda casa decimal de n2

			//Se não for a última combinação, imprime a vírgula e o espaço
			if(!(n1 == 98 && n2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return 0;
}
*/
			
