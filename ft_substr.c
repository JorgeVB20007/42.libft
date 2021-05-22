#include <stdio.h>
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	int		r;
	int		max;

	r = 0;
	while (s[r] != 0)
		r++;
	if (len > r - start)
		max = r - start;
	else
		max = len;
	t = malloc(max + 1);
	r = 0;
	while (r <= max)
	{
		t[r] = s[r + start];
		r++;
	}
	t[r] = 0;
	return (t);
}

/*
int main()
{
	printf("%s", ft_substr("qwertyuiopasdfghjklz", 2, 200));
}
*/