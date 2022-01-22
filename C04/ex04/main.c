#include <stdio.h>
#include "ft_putnbr_base.c"
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(124, "01234");
	write(1, "\n", 1);
	ft_putnbr_base(255, "0123456789abcdef");
	write(1, "\n", 1);
	return (0);
}
