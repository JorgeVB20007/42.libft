#include "libft.h"

int	secondpartjvc(char const *s1, char *ns)
{
	int	c1;

	c1 = 0;
	while (s1[c1] != 0)
	{
		ns[c1] = s1[c1];
		c1++;
	}
	return (c1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		c1;
	int		c2;
	char	*ns;

	c1 = 0;
	c2 = 0;
	while (s1[c1] != 0)
		c1++;
	while (s2[c2] != 0)
		c2++;
	ns = malloc(c1 + c2 + 1);
	if (!ns)
		return (NULL);
	c1 = secondpartjvc(s1, ns);
	c2 = 0;
	while (s2[c2] != 0)
	{
		ns[c1 + c2] = s2[c2];
		c2++;
	}
	ns[c1 + c2] = 0;
	return (ns);
}

/*
int	main()
{
	printf("%s", ft_strjoin("qwertyuiop", "asdfghjklz"));
}
*/