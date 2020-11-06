#ifndef UTILS_H
# define UTILS_H

# include <fcntl.h>
# include <unistd.h>

#define BUFFER_SIZE 1

char		*newline(char *text, char **line, int ret);
int			get_next_line(int fd, char **line);

#endif