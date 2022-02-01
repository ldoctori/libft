#include "../includes/libft.h"
void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	count;
	unsigned char	*p;

	p = (unsigned char *) s;
	count = 0;
	while (count < n)
	{
		p[count] = '\0';
		count++;
	}
}
