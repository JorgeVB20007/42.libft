#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	m;
	int		*t1;
	int		*t2;
	int		z1;

	m = 0;
	t1 = (int *)s1;
	t2 = (int *)s2;
	while (m < n)
	{
		if (&s1[m] == &s2[m])
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
int main()
{
	char a[] = "9wertyuiop";
	char b[] = "0wertyuiop";
	int n = 5;

	printf("Orig %d\n", memcmp(a, b, n));
	printf("User %d\n", ft_memcmp(a, b, n));

}
*/