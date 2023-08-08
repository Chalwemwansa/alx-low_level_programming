#include "main.h"
/**
 * append_text_to_file - appends text to a file
 *
 * Return: an integer
 * @filename: the name of the file to be appended to
 * @text_content: the content to be appended to the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wr, size = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	while (text_content[size] != '\0')
		size++;
	wr = write(fd, text_content, size);
	close(fd);
	if (wr == -1)
		return (-1);
	return (1);
	}
	else
	{
		close(fd);
		return (1);
	}
}
