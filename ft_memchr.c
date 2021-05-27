#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			f;
	unsigned char	*b;

	b = (unsigned char *)s;
	f = 0;
	while (f < n)
	{
		if (b[f] == (unsigned char)c)
		{
			return (&b[f]);
		}
		f++;
	}
	return (0);
}
/*
#include <unistd.h>
void	ft_print_result(const char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

#include <string.h>
int main()
{
	char str1[50] = "qwertyuiopasdfghjklz";
	char *ptr1;

	ptr1 = &str1[0];
	printf("Orig %s\n", memchr(ptr1, 'q', 0));
	printf("User %s\n", ft_memchr(ptr1, 'q', 0));*/

	/*const char *str;
	str = ft_memchr("qwertyuiop", 'e', 9);
	unsigned char t = -1;
	printf("====%c, %d====\n", t, (int)t);

	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

		printf("%s", (char *)ft_memchr(tab, -1, 7));

}*/
