#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*loc;
	const char	*ptr;

	if (c == '\0')
		return (ft_strchr(s, c));
	loc = 0;
	ptr = ft_strchr(s, c);
	while ((ptr != 0))
	{
		loc = ptr;
		s = ptr + 1;
		ptr = ft_strchr(s, c);
	}
	return ((char *) loc);
}
