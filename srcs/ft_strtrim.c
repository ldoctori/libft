#include "../includes/libft.h"

unsigned int	ft_while_set(char const *set, char ch)
{
	unsigned int	count;

	count = 0;
	while (set[count])
	{
		if (set[count] == ch)
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*str_count;
	char	*start;
	char	*end;

	start = (char *) s1;
	while (start && ft_while_set(set, *start))
		start++;
	end = (char *)(s1 + ft_strlen(s1) - 1);
	if (start == end)
		return (0);
	while (end > start && ft_while_set(set, *end))
		--end;
	str = malloc((end - start + 1) * sizeof(char *));
	if (!str)
		return (0);
	str_count = str;
	while (start <= end)
		*str_count++ = *start++;
	*str_count = 0;
	return (str);
}
