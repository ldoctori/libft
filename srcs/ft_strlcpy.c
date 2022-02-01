#include "../includes/libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int dstsize)
{
	unsigned int	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while ((src[i] != '\0') && (i < dstsize - 1))
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (ft_strlen(src));
}
