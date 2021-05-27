#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	c;
	size_t	c2;
	size_t	c3;

	c = 0;
	c2 = 0;
	c3 = 0;
	while (dst[c] != 0)
		c++;
	while (src[c3] != 0)
		c3++;
	if (n < c)
		return (c3 + n);
	else
	{
		c3 = c3 + c;
		while (c + 1 < n && src[c2] != 0)
		{
			dst[c] = src[c2];
			c++;
			c2++;
		}	
		dst[c] = 0;
		return (c3);
	}
}
/*
#include <unistd.h>
#include <string.h>


void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int main()
{
	char	*dest;
	char	*dest2;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	if (!(dest2 = (char *)malloc(sizeof(*dest2) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	memset(dest2, 0, 15);
	memset(dest2, 'r', 6);

	memset(dest, 'r', 15);
	printf("   DEST = %s   ", dest);
	ft_print_result(ft_strlcat("rrrrrrrrrrrrrrrrrrrrr", "lorem ipsum dolor sit amet", 20));
	write(1, "\n", 1);
	write(1, "*", 1);
	write(1, dest, 15);
	write(1, "*", 1);

	write(1, "\n", 1);

	memset(dest2, 'r', 15);
	ft_print_result(strlcat("rrrrrrrrrrrrrrrrrrrrr", "lorem ipsum dolor sit amet", 20));
	write(1, "\n", 1);
	write(1, "*", 1);
	write(1, dest2, 15);
	write(1, "*", 1);
}
*/