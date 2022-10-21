#include <printf.h>

int main(int ac, char **av)
{
	for (int c = 0; c < ac; c++)
	{
		printf("%s\n", av[c]);
	}
	return (0);
}