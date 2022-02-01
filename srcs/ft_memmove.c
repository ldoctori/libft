#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	unsigned char	*lastd;
	unsigned char	*lasts;

	if (!src && !dest)
		return (0);
	pd = (unsigned char *) dest;
	ps = (unsigned char *) src;
	if (pd < ps)
		while (n--)
			*pd++ = *ps++;
	else
	{	
		lastd = pd + (n - 1);
		lasts = ps + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
