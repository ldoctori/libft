#include "../includes/libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{	
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
