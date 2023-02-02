#include <stdio.h>
#include <stdlib.h>

unsigned long	ft_strlen(char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*s1c;
	char	*s2c;
	int		i;

	s1c = (char *)s1;
	s2c = (char *)s2;
	str = malloc((ft_strlen(s2c) + ft_strlen(s1c)) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (s1c[0] != '\0')
	{
		str[i] = s1c[0];
		++i;
		++s1c;
	}
	while (s2c[0] != '\0')
	{
		str[i] = s2c[0];
		++i;
		++s2c;
	}
	str[i] = '\0';
	return (str);
}