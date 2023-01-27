#include<stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

unsigned long	ft_strlen(char *str);

char	*ft_strnstr(const char	*abuscar, const char *buscando, size_t len)
{
	char	*a;
	char	*b;
	int		i;

	i = 0;
	a = (char *)abuscar;
	b = (char *)buscando;
	while (i < (int)len - 1)
	{
		if (ft_strncmp(a, b, ft_strlen(b)) == 0)
			break ;
		++a;
		++i;
	}
	if (ft_strncmp(a, b, ft_strlen(b)) == 0)
		return (a);
	return (0);
}