#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	a;
	char	*e;

	a = 0;
	e = s;
	while (a < n)
	{
		e[a] = 0;
		a++;
	}
}

/*
int main()
{
	char str[50] = "qwertyuiopasdfghjklz";
	char str2[50] = "qwertyuiopasdfghjklz";
	char *ptr;
	char *ptr2;

	ptr = &str[0];
	ptr2 = &str2[0];

	printf("Orig %s\n", bzero(ptr, 8));
	printf("User %s\n", ft_bzero(ptr2, 8));
	printf("Orig %s\n", str);
	printf("User %s\n", str2);

}
*/