#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*l;
	int		b;

	a = 0;
	l = (char *)s;
	b = 0;
	while (l[a] != 0)
		a++;
	a--;
	while (l[a] != c)
	{
		if (l[a] == 0)
		{
			return (0);
		}
		a--;
	}
	return (&l[a]);
}

/*
int main()
{
	int p;
	char search[] = "qwertyuiopryihk";

	p = 0;
	printf("Orig %s\n", strrchr(search, 'r'));
	printf("User %s\n", ft_strrchr(search, 'r'));
	while (p < 256)
	{
		if (strrchr(search, p) == ft_strrchr(search, p))
			printf("%s :) -    ", strrchr(search, p));
		else 
			printf("\n\n- ERROR AT %d\n\n", p);
		p++;
	}
}
*/