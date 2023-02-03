#include <stdio.h>
#include <stdlib.h>
char	*ft_strchr(const char *s, int c);

static	char*ft_makestr(char *str, char c)
{
	int	i;
	char *tmpstr;
	i = 0;
	while (str[i] != c && str[i] != 0)
		++i;
	tmpstr = (malloc(i * sizeof(char)));
	if (!tmpstr)
		return (0);
	i = 0;
	while (str[i] != c && str[i] != 0)
	{
		tmpstr[i] = str[i];
		++i;
	}
	tmpstr[i] = '\0';
	return (tmpstr);
}

static char	**ft_putstr(char **strdstr, char *str, int i, char c)
{
	int i2;

	i2 = 0;
	strdstr[i2] = ft_makestr(str + (i2), c);
	++i2;
	while (str[i] != '\0')
	{
		if(str[i] == c)
		{
			strdstr[i2] = ft_makestr(str + (i + 1), c);
			++i2;
		}
		++i;
	}
	strdstr[i2] = 0;
	return (strdstr);
}

char	**ft_split(char const *s, char c)
{
	char	**strdstr;
	int		i;
	char	*sc;

	i = 1;
	sc = (char *)s;
	while (sc[0] != '\0')
	{
		if (sc[0] == c)
			++i;
		++sc;
	}
	if (i == 1)
		i = 2;
	strdstr = (malloc(i * sizeof(char *)));
	if (!strdstr)
		return (0);
	sc = (char *)s;
	i = 0;
	strdstr = ft_putstr(strdstr, sc, i, c);
	return (strdstr);
}