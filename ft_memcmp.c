#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			m;
	unsigned char	*t1;
	unsigned char	*t2;

	m = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (m < n)
	{
		if (t1[m] == t2[m])
		{
			m++;
		}
		else
		{
			return (t1[m] - t2[m]);
		}
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
//	char a[] = ".";
//	char b[] = "";
//	int n = 5;

	printf("Orig %d\n", memcmp("abcdefgh", "abcdwxyz", 6));
	printf("User %d\n", ft_memcmp("abcdefgh", "abcdwxyz", 6));

}
*/