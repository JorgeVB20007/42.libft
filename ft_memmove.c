#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				a;
	unsigned char		*f;
	const unsigned char	*g;

	f = dest;
	g = src;
	if (f > g)
	{
		a = n;
		while (a > 0)
		{
			a--;
			f[a] = g[a];
		}
	}
	else
	{
		a = 0;
		while (a < n)
		{
			f[a] = g[a];
			a++;
		}
	}
	return (f);
}

/*
int main()
{
	char str1[50] = "aabbccdd";
	char str2[50] = "aabbccdd";
	char str3[50] = ",";
	char str4[50] = ",";
	char *ptr1;
	char *ptr2;
	char *ptr3;
	char *ptr4;

	ptr1 = &str1[0];
	ptr2 = &str2[0];
	ptr3 = &str3[0];
 	ptr4 = &str4[0];

	printf("Orig %s\n", memmove(ptr1+2, ptr1, 8));
	printf("User %s\n", ft_memmove(ptr2+2, ptr2, 8));
	printf("Orig %s\n", str1);
	printf("User %s\n", str2);

}
*/