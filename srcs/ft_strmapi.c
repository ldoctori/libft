#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = ft_strdup((char *)s);
	if (!str)
		return (0);
	while (str[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
