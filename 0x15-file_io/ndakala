#include "main.h"
/**
 * create_file - creates a new file
 *
 * @filename: the name of the file
 * @text_content: a null terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t wr, fd, size = 0;

	umask(0000);
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
		if (fd == -1)
			return (-1);
	}
	if (text_content != NULL)
	{
	while (text_content[size] != '\0')
		size++;
	wr = write(fd, text_content, size);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);

}
