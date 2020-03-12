#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	int				fd;
	int				fd2;
	int				i;
	int				j;
	char			*line = 0;
	(void)(argc);
		if ((fd = open(argv[1], O_RDONLY)) < 0)
	{
		printf("Error in open\n");
		return (0);
	}
	// printf(“FD: %d\n”,fd);
	while ((j = get_next_line(fd, &line)) > 0)
	{
		printf("%d : %s\n", j, line);
		free(line);
	}
	free(line);
	printf ("%d : %s", j, line);
	printf ("\nleaks a.out :\n");
	system ("leaks a.out");
	return (0);
}
