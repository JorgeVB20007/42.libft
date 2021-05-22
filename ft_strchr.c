#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*l;

	a = 0;
	l = (char *)s;
	while (l[a] != c)
	{
		if (l[a] == 0)
		{
			return (0);
		}
		a++;
	}
	return (&l[a]);
}

/*
int main()
{
	int p;
	char search[] = "qwertyuiop";

	p = 0;
	printf("Orig %s\n", strchr(search, 0));
	printf("User %s\n", ft_strchr(search, 0));
	while (p < 256)
	{
		if (strchr(search, p) == ft_strchr(search, p))
			printf("%s :) -    ", strchr(search, p));
		else 
			printf("\n\n- ERROR AT %d\n\n", p);
		p++;
	}
}
*/