#include "../includes/libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		str_len;
	char	*copy;

	str_len = ft_strlen(src);
	copy = malloc(str_len + 1);
	if (copy == NULL)
		return (0);
	i = 0;
	while (i < str_len + 1)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
