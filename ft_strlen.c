#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while ((*(s + n)) != '\0')
		n++;
	return (n);
}

/*
int main()
{
	printf("Orig: %zu\n", strlen("qwertyuiop"));
	printf("User: %zu\n", ft_strlen("qwertyuiop"));
}
*/