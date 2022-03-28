#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdlib.h>
#include <unistd.h>

#include "main.h"

/**
 * buff_len - counts the characters of the buffer string
 * @b: pointer to the string
 * Return: number of chars or 0 if NULL pointer passed
 */
size_t buff_len(char *b)
{
	if (b == NULL)
		return (0);

	if (*b == '\0')
		return (0);

	b++;

	return (1 + buff_len(b));
}

/**
 * read_textfile - reads a text file to stdout
 * @filename: a pointer to a string containing the file name
 * @letters: the number of letters to be read and printed
 * Return: number of letters read and printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len, written;
	char *buff;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(*buff) * (letters + 1));

	if (buff == NULL)
		return (0);

	read(fd, buff, letters);
	close(fd);

	buff[letters + 1] = '\0';
	len = buff_len(buff);

	written = write(1, buff, len);
	free(buff);

	if (written == -1)
		return (0);

	return (len);
}
