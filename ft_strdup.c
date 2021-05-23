#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		cntr;
	int		cntr2;
	char	*s2;

	cntr = 0;
	cntr2 = 0;
	while (s1[cntr] != 0)
		cntr++;
	s2 = malloc(cntr + 1);
	while (cntr2 < cntr)
	{
		s2[cntr2] = s1[cntr2];
		cntr2++;
	}
	s2[cntr2] = 0;
	return (s2);
}

/*
int main()
{
	char s1[] = "dyrjfxnnd3 54g65&$·$";
	printf("Orig %s\n", strdup(s1));
	printf("User %s\n", ft_strdup(s1));
}
*/