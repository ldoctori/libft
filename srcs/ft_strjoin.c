#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ns;
	unsigned int	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	ns = malloc(size * sizeof(char *));
	if (!ns)
		return (0);
	ft_strlcat(ns, s1, size);
	ft_strlcat(ns, s2, size);
	ns[size - 1] = '\0';
	return (ns);
}
