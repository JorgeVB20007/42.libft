#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	c;
	int		stop;

	c = 0;
	stop = 0;
	while (src[c] != 0)
	{
		if (c < n - 1)
		{
			dst[c] = src[c];
		}
		else if ((dst[c] != 0) && stop == 0)
		{
			dst[c] = 0;
		}
		else
			stop = 1;
		c++;
	}
	return (c);
}

/*
int main()
{
	char	dest1[] = ".........";
	char	dest2[] = ".........";
	char	src[] = "ctfyvgubhinjibuvgyygubiuyutyuiuytyuy";

	printf("\nBfre Orig dest %s\n", dest1);
	printf("Bfre User dest %s\n\n", dest2);
	printf("Orig %lu\n", strlcpy(dest1, src, 9));
	printf("User %lu\n\n", ft_strlcpy(dest2, src, 9));
	printf("Orig dest %s\n", dest1);
	printf("User dest %s\n\n", dest2);
}
*/