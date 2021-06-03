#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	cntr;

	memory = malloc(count * size);
	if (!memory)
		return (NULL);
	cntr = 0;
	while (cntr < count * size)
	{
		memory[cntr] = 0;
		cntr++;
	}
	return (memory);
}
/*
int main()
{
	char *memory1;
	char *memory2;
	size_t cntr = 0;
	size_t count = 1;
	size_t size = 2;

	memory1 = calloc(count, size);
	memory2 = ft_calloc(count, size);
	printf("Ori / You\n");
	while (cntr <= count * size)
	{
		printf("%c / %c\n", memory1[cntr]+'0', memory2[cntr]+'0');
		cntr++;
	}
	printf("--\n%c / %c\n", memory1[cntr]+'0', memory2[cntr]+'0');
	cntr++;
	printf("%c / %c\n", memory1[cntr]+'0', memory2[cntr]+'0');
	cntr++;
	printf("%c / %c\n", memory1[cntr]+'0', memory2[cntr]+'0');
	cntr++;
	printf("%c / %c\n", memory1[cntr]+'0', memory2[cntr]+'0');
	cntr++;
	printf("%c / %c\n", memory1[cntr]+'0', memory2[cntr]+'0');
	cntr++;
	printf("%c / %c\n", memory1[cntr]+'0', memory2[cntr]+'0');
	cntr++;
	printf("%c / %c\n", memory1[cntr]+'0', memory2[cntr]+'0');
	cntr++;
	printf("%c / %c\n", memory1[cntr]+'0', memory2[cntr]+'0');
}
*/