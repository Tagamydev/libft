#include <stdio.h>
#include <stdlib.h>

unsigned long	ft_strlen(char *str);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		i2;
	int		i3;
	int		i4;

	i = 0;
	i2 = 0;
	i3 = 0;
	str = (char *)s1;
	while (s1[i] != '\0')
	{
		i2 = 0;
		while (set[i2] != '\0')
		{
			if (s1[i] == set[i2])
			{
				++i3;
				break ;
			}
			++i2;
		}
		++i;
	}
	str = (malloc((ft_strlen((char *)s1) - i3) * sizeof(char)));
	if (!str)
		return (0);
	i = 0;
	i4 = 0;
	while (s1[i] != '\0')
	{
		i2 = 0;
		i3 = 0;
		while (set[i2] != '\0')
		{
			if (s1[i] == set[i2])
			{
				++i3;
				break ;
			}
			++i2;
		}
		if (i3 == 0)
		{
			str[i4] = *(char *)(s1 + i);
			++i4;
		}
		++i;
	}
	str[i4] = '\0';
	return (str);
}
