#include "../includes/libft.h"

int	ft_isprint(int c)
{
	if (127 > c && c > 31)
		return (1);
	return (0);
}
