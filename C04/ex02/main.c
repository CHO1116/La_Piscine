#include "ft_putnbr.c"

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(12341234);
	write(1, "\n", 1);

	ft_putnbr(14);
	write(1, "\n", 1);
	
	ft_putnbr(348);
	write(1, "\n", 1);
	
	ft_putnbr(9);
	write(1, "\n", 1);
	
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	
	ft_putnbr(-2147483648);
	write(1, "\n", 1);

	return (0);
}
