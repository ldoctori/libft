#include "../includes/libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	count;
	unsigned char	*p;

	if (!s)
		return (0);
	p = (unsigned char *) s;
	count = 0;
	while (count < n)
	{
		p[count] = c;
		count++;
	}
	return (p);
}
