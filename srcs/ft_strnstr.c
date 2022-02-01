#include "../includes/libft.h"

char	*ft_strnstr(const char *str, const char *to_find, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (!str)
		return (0);
	if (to_find[0] == '\0' || !to_find)
		return ((char *) str);
	i = 0;
	while (str[i] != '\0' && i < size)
	{	
		j = 0;
		while (str[i + j] != '\0' && i + j < size
			&& str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return ((char *) str + i);
		i++;
	}
	return (0);
}
