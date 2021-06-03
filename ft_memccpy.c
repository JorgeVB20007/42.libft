#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				a;
	unsigned char		*f;
	const unsigned char	*g;

	a = 0;
	f = dest;
	g = src;
	while (a < n)
	{
		f[a] = g[a];
		if (g[a] == (unsigned char)c)
		{
			return (&f[a + 1]);
		}
		a++;
	}
	return (NULL);
}

/*
int main()
{
	char str1[50] = "qwertyuiopasdfghjklz";
	char str2[50] = "qwertyuiopasdfghjklz";
	char str3[50] = "12345678901234567890,";
	char str4[50] = "12345678901234567890,";
	char *ptr1;
	char *ptr2;
	char *ptr3;
	char *ptr4;

	ptr1 = &str1[0];
	ptr2 = &str2[0];
	ptr3 = &str3[0];
	ptr4 = &str4[0];

	printf("Orig %s\n", memccpy(ptr1, ptr3, '8', 20));
	printf("User %s\n", ft_memccpy(ptr2, ptr4, '8', 20));
	printf("Orig %s\n", str1);
	printf("User %s\n", str2);

}
*/