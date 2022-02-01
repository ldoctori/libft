#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	count;
	unsigned char	*pd;
	unsigned char	*ps;

	if (!src && !dest)
		return (0);
	pd = (unsigned char *) dest;
	ps = (unsigned char *) src;
	count = 0;
	while (count < n)
	{
		pd[count] = ps[count];
		count++;
	}
	return (pd);
}
