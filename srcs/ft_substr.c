#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = malloc(len);
	if (!sub)
		return (0);
	return (ft_memcpy(sub, s + start, len));
}
