#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{	
	unsigned char	*ch1;
	unsigned char	*ch2;

	ch1 = (unsigned char *) s1;
	ch2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (n--)
	{	
		if (*ch1 != *ch2)
			return (*ch1 - *ch2);
		ch1++;
		ch2++;
	}
	return (0);
}
