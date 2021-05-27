#include "libft.h"
void	ft_putstr_fd(char *s, int fd)
{
	int	a;

	a = 0;
	while (s[a] != 0)
	{
		write(fd, &s[a], 1);
		a++;
	}
}
/*
int main()
{
	ft_putstr_fd("rsetdryftuyg", 2);
}*/