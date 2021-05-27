#include "libft.h"
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	c = n + 48;
	write(fd, &c, 1);
}
