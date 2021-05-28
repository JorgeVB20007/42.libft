#include "libft.h"

int	finalreturning(const char *s1, const char *s2, size_t m)
{
	if (s1[m] == 0 && s2[m] != 0)
		return (-1);
	if (s1[m] != 0 && s2[m] == 0)
		return (1);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	m;
	char	*t1;
	char	*t2;

	t1 = (char *)s1;
	t2 = (char *)s2;
	m = 0;
	if (!n)
		return (0);
	while (m < n && s1[m] != 0 && s2[m] != 0)
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
	return (finalreturning(s1, s2, m));
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	printf("1  User %d\n", ft_strncmp("salut", "salut", 5));
	printf("1  Orig %d\n", strncmp("salut", "salut", 5));

	printf("\n ------ \n\n");
	printf("2  User %d\n", ft_strncmp("test", "testss", 7));
	printf("2  Orig %d\n", strncmp("test", "testss", 7));

	printf("\n ------ \n\n");
	printf("3  User %d\n", ft_strncmp("testss", "test", 7));
	printf("3  Orig %d\n", strncmp("testss", "test", 7));

	printf("\n ------ \n\n");
	printf("4  User %d\n", ft_strncmp("test", "tEst", 4));
	printf("4  Orig %d\n", strncmp("test", "tEst", 4));

	printf("\n ------ \n\n");
	printf("5  User %d\n", ft_strncmp("", "test", 4));
	printf("5  Orig %d\n", strncmp("", "test", 4));

	printf("\n ------ \n\n");
	printf("6  User %d\n", ft_strncmp("test", "", 4));
	printf("6  Orig %d\n", strncmp("test", "", 4));

	printf("\n ------ \n\n");
	printf("7  User %d\n", ft_strncmp("abcdefghij", "abcdefgxyz", 3));
	printf("7  Orig %d\n", strncmp("abcdefghij", "abcdefgxyz", 3));

	printf("\n ------ \n\n");
	printf("7  User %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("7  Orig %d\n", strncmp("abcdefgh", "abcdwxyz", 4));

	printf("\n ------ \n\n");
	printf("8  User %d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("8  Orig %d\n", strncmp("zyxbcdefgh", "abcdwxyz", 0));

	printf("\n ------ \n\n");
	printf("9  User %d\n", ft_strncmp("abcdefgh", "", 0));
	printf("9  Orig %d\n", strncmp("abcdefgh", "", 0));

	printf("\n ------ \n\n");
	printf("10 User %d\n", ft_strncmp("test\200", "test\0", 6));
	printf("10 Orig %d\n", strncmp("test\200", "test\0", 6));
	printf("\n\n");

}
*/