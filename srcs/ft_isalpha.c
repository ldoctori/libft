#include "../includes/libft.h"

int	ft_isalpha(int c)
{
	if (('Z' >= c && c >= 'A') || ('z' >= c && c >= 'a'))
		return (c);
	else
		return (0);
}
