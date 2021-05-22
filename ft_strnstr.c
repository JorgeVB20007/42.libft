#include <stdio.h>
#include <string.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hs;
	char	*nl;
	size_t	contr;
	int		subcontr;

	hs = (char *)haystack;
	nl = (char *)needle;
	contr = 0;
	while (contr < len && hs[contr] != 0)
	{
		subcontr = 0;
		if (hs[contr] == nl[0])
		{
			while (nl[subcontr] == hs[contr + subcontr] && nl[subcontr] != 0)
				subcontr++;
			if (nl[subcontr] == 0)
				return (&hs[contr]);
		}
		contr++;
	}
	return (0);
}

/*
int main()
{
	char pajar[] = "abcdefghijklmnopqrstuvwxyz";
	char aguja[] = "fg";
	int num = 20;
	printf("Orig: %s\n", strnstr(pajar, aguja, num));
	printf("User: %s\n", ft_strnstr(pajar, aguja, num));
}
*/