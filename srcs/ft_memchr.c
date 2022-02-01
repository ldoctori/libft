#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	char			*ptr;
	unsigned int	count;
	unsigned char	ch;

	ptr = (char *) s;
	ch = (unsigned char) c;
	count = 0;
	while (count < n)
	{
		if ((unsigned char) ptr[count] == ch)
			return ((char *) ptr + count);
		count++;
	}
	return (0);
}
