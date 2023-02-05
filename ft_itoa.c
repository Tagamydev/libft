#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_powten(int n)
{
	int	i;
	int	t;
	int	t2;

	i = 1;
	t = 10;
	t2 = 10;
	if (n <= 0)
		i = 1;
	while (i != n)
	{
		t = t2 * t;
		++i;
	}
	return (t);
}

static int	ft_intlen(int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = n * -1;
	while (n != 0)
	{
		n = n / 10;
		++i;
	}
	return (i);
}

static int	ft_getndigit(int n, int i)
{
	int		a;
	double	d;

	a = 0;
	if (n < 0)
		n = n * -1;
	if (i > ft_intlen(n))
		return (0);
	a = ft_powten(ft_intlen(n)) / ft_powten(i);
	n = n / a;
	d = n;
	n = n / 10;
	d = d / 10;
	d = d - n;
	d = d * 10;
	n = d + 0.5;
	return (n);
}

char	*ft_itoa(int n)
{
	char *str;
	int		i;

	i = 0;
	str = (malloc((ft_intlen(n)) * sizeof(char)));
	if (!str)
		return (0);
	if (n < 0)
		str[i] = '-';
	else
		str[i] = '+';
	++i;
	if (n < 0)
	{
		while (i != (ft_intlen(n) + 1))
		{
			str[i] = ft_getndigit(n, i) + '0';
			++i;
		}
	}
	else
	{
		i = 0;
		while (i != (ft_intlen(n)))
		{
			str[i] = ft_getndigit(n, i + 1) + '0';
			++i;
		}
	}
	str[i] = '\0';
	return (str);
}
