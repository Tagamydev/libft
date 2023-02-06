#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nd;

	nd = n;
	if (nd < 0)
	{
		nd = nd * -1;
		ft_putchar_fd('-', fd);
	}
	if (n > 9)
		ft_putnbr_fd(nd / 10, fd);
	ft_putchar_fd(nd % 10 + '0', fd);
}
