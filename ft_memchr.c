#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			f;
	unsigned char	*b;

	b = (void *)s;
	f = 0;
	while (f < n)
	{
		if (b[f] == c)
		{
			return (&b[f]);
		}
		f++;
	}
	return (0);
}

/*
int main()
{
	char str1[50] = "qwertyuiopasdfghjklz";
	char *ptr1;

	ptr1 = &str1[0];
	printf("Orig %s\n", memchr(ptr1, 'q', 0));
	printf("User %s\n", ft_memchr(ptr1, 'q', 0));

}
*/