#include "../includes/libft.h"

int	ft_tolower(int c)
{
	if (91 > c && c > 64)
		return (c + 32);
	else
		return (c);
}
