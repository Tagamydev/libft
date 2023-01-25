#include<stdlib.h>

void	*ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	int i;

	i = -1;
	if(!(str = (void *)malloc(count * size)))
		return (0);
	ft_bzero(str, count);
	return (str);
}
