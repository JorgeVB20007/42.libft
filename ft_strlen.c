#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	n;

	n = 0;
	while ((*(str + n)) != '\0')
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