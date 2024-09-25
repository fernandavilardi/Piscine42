#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648) // Caso especial para o menor valor de int
	{
		write(1, "-2147483648", 11);
		return;
	}
	if (nb < 0) // Se o número for negativo
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10) // Se o número tiver mais de um dígito
	{
		ft_putnbr(nb / 10); // Chamada recursiva com o número dividido por 10
	}
	// Calcula o último dígito e converte para caractere
	c = nb % 10 + '0';
	write(1, &c, 1); // Escreve o caractere
}

int	main(void)
{
	ft_putnbr(42);         // Mostra "42"
	write(1, "\n", 1);
	ft_putnbr(-2147483648); // Mostra "-2147483648"
	write(1, "\n", 1);
	ft_putnbr(0);          // Mostra "0"
	write(1, "\n", 1);
	ft_putnbr(-12345);     // Mostra "-12345"
	write(1, "\n", 1);
	return (0);
}

