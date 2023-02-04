#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

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