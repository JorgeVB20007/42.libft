#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*l;
	int		b;

	a = 0;
	l = (char *)s;
	b = 0;
	if (s[0] == '\0' && c == '\0')
		return (&l[a]);
	if (s[0] == '\0')
		return (NULL);
	while (l[a] != 0)
		a++;
	if (c == 0)
		return (&l[a]);
	a--;
	while (l[a] != (char)c)
	{
		if (a <= 0)
		{
			return (NULL);
		}
		a--;
	}
	return (&l[a]);
}

/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>



int main()
{
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	printf("1- User: %s\t%d\n", ft_strrchr(s, 't'), 
	(ft_strrchr(s, 't') == s));
//	printf("2- User: %s\t\t%d\n", ft_strrchr(s, 'l')), 
(ft_strrchr(s, 'l') == s + 8));
	printf("3- User: %s\t\t%d\n", ft_strrchr(s2, 'l'), 
	(ft_strrchr(s2, 'l') == s2 + 9));
	printf("4- User: %s\t\t%d\n", ft_strrchr(s, 'z'),
	 (ft_strrchr(s, 'z') == NULL));
	printf("5- User: %s\t\t%d\n", ft_strrchr(s, 0), 
	(ft_strrchr(s, 0) == s + strlen(s)));
	printf("6- User: %s\t%d\n", ft_strrchr(s, 't' + 256),
	 (ft_strrchr(s, 't' + 256) == s));
	char * empty = (char*)calloc(1, 1);
	printf("7- User: %s\t\t%d\n", ft_strrchr(empty, 'V'),
	 (ft_strrchr(empty, 'V') == NULL));
}
*/