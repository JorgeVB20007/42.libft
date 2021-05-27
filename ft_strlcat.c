#include "libft.h"

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
	
	char	dest1[30] = "qaz";
	char	dest2[30] = "qaz";
	char	dest3[30] = "qaz";
	char	dest4[30] = "qaz";
	char	src[] = "qwertyuiop";
	int f = 29;

	printf("\nBfre Orig dest %s\n", dest1);
	printf("Bfre User dest %s\n\n", dest2);
	printf("Orig %lu\n", strlcat(dest1, src, f));
	printf("User %lu\n\n", ft_strlcat(dest2, src, f));
	printf("Orig dest %s\n", dest1);
	printf("User dest %s\n\n", dest2);
	if (strlcat(dest3, src, f) == ft_strlcat(dest4, src, f) && *dest3 == *dest4)
		printf("\n\nALL GOOD :D\n\n");
	else
		printf("\n\n :\( \n\n");
		

	char *dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);

	memset(dest, 'r', 15);
		ft_print_result(strlcat(dest, "lorem ipsum dolor sit amet", 5));
		write(1, "\n", 1);
		write(1, dest, 15);

}
*/