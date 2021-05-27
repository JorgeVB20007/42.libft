#include "libft.h"

size_t	calcreturn(const char	*src)
{
	size_t	c;

	c = 0;
	while (src[c] != 0)
		c++;
	return (c);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	c;

	c = 0;
	if (n == 0)
	{
		return (calcreturn(src));
	}
	while (c < n - 1)
	{
		if (src[c] == 0)
			break ;
		dst[c] = src[c];
		c++;
	}
	dst[c] = 0;
	return (calcreturn(src));
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);

	printf("\nBfre Orig dest %s\n", dest);
	printf("Orig %lu\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
	printf("Orig dest %s\n", dest);
}
*/