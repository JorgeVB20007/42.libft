#include "libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	int	a;

	a = 0;
	while (s[a] != 0)
	{
		write(fd, &s[a], 1);
		a++;
	}
	write(fd, "\n", 1);
}
