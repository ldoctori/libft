#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	size;
	unsigned int	loc;
	char			*ptr;

	ptr = (char *)s;
	size = ft_strlen(s) + 1;
	loc = 0;
	while (loc <= size)
	{
		if (c == ptr[loc])
			return (ptr + loc);
		loc++;
	}
	return (0);
}
