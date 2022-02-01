#include "../includes/libft.h"

int	ft_isdigit(int c)
{
	if ('9' >= c && c >= '0')
		return (c);
	else
		return (0);
}
