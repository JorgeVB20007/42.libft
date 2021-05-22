#include <stdio.h>
#include <string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	m;
	char	*t1;
	char	*t2;

	t1 = (char *)s1;
	t2 = (char *)s2;
	m = 0;
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
	return (0);
}

/*
int main()
{
	char a[] = "q.ertpuiop";
	char b[] = "q,wertyuiop";
	int n = 5;

	printf("Orig %d\n", strncmp(a, b, n));
	printf("User %d\n", ft_strncmp(a, b, n));

}
*/