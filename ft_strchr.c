#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*l;

	a = 0;
	l = (char *)s;
	while (l[a] != (char)c)
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
#include <stdio.h>
#include <string.h>
int main()
{
	int p;
	char search[] = "tripouille";

	p = 0;
	printf("Orig %s\n", strchr(search, 't' + 256));
	printf("User %s\n", ft_strchr(search, 't' + 256));
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