# include <stdio.h>
# include <stdlib.h>

int	ft_vc(char c, char *s)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		++s;
	}
	return (0);
}

char	*ft_put_str(char *o, size_t l, char *s)
{
	size_t	i;

	i = 0;
	while (i < l)
	{
		s[i] = o[i];
		++i;
	}
	return (s);
}

char	*ft_trim(char *s1, char *set)
{
	size_t	i;
	size_t	f;
	size_t	l;
	int		s;
	char	*r;
	
	i = 0;
	f = 0;
	l = 0;
	while (s1[i] && ft_vc(s1[i], set) == 1)
		++i;
	while (s1[l])
		++l;
	f = l - 1;
	while (s1[f] && ft_vc(s1[f], set) == 1)
		--f;
	f = (l - 1) - f;
	s = l - (i + f);
	if (s < 0)
		return (NULL);
	r = malloc (sizeof(char) * (s + 1));
	if (!r)
		return (0);
	r[s] = '\0';	
	return (ft_put_str((s1 + i), f, r));
}

char *ft_strtrim(char const *s1, char const *set)
{
	if (!set)
		return ((char *)s1);// cambiar por la strdup
	if (!s1)
		return (NULL);
	return (ft_trim((char *)s1, (char *)set));
}

int	main()
{
	char	tab[1];
	printf("%s", ft_strtrim(tab, "ab"));
}
