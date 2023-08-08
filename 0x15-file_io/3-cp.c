#include "main.h"
/**
 * handle - prints
 *
 * @str: variable
 * @fd: an int
 * @fd1: an int
 * @f: an int
 * Return: nothing
 */
void handle(char *str, char *fd, char *fd1, int f)
{
	free(str);
	if (f == 1)
	{
	dprintf(2, "Error: Can't read from file %s\n", fd);
	exit(98);
	}
	if (f == 2)
	{
	dprintf(2, "Error: Can't write to %s\n", fd1);
	exit(99);
	}
}
/**
 * clos - closes a process
 *
 * @fd: variable
 * @fd1: variable
 * @f: variable
 * Return: nothing
 */
void clos(int fd, int fd1, int f)
{
	int r;

	if (f == 1)
	{
	r = close(fd);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	}
	else
	{
		r = close(fd);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
		r = close(fd1);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
			exit(100);
		}
	}
}
/**
 * create - creates a string
 *
 * Return: a new string
 */
char *create()
{
	char *str;

	str = malloc(sizeof(char) * 1024);
	if (str == NULL)
		exit(98);
	return (str);
}
/**
 * ex - exits
 *
 * Return: nothing
 */
void ex(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * main - copies content from one file to another
 *
 * @argv: the arguments passed from the command line
 * @argc: the number of arguments passed to the command line
 * Return: an int
 */
int main(int argc, char *argv[])
{
	int fd, fd1, wr, rd;
	char *str;

	if (argc != 3)
		ex();
	str = create();
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		handle(str, argv[1], argv[2], 1);
	}
	fd1 = open(argv[2], O_WRONLY | O_TRUNC);
	if (fd1 == -1)
	{
		fd1 = open(argv[2], O_CREAT | O_WRONLY, 0664);
		if (fd1 == -1)
		{
			clos(fd, fd1, 1);
			handle(str, argv[1], argv[2], 2);
		}
	}
	while ((rd = read(fd, str, 1024)) > 0)
	{
		if (rd == -1)
		{
			clos(fd, fd1, 0);
			handle(str, argv[1], argv[2], 1);
		}
		wr = write(fd1, str, rd);
		if (wr == -1)
		{
			clos(fd, fd1, 0);
			handle(str, argv[1], argv[2], 2);
		}
		free(str);
		str = create();
	}
	free(str);
	clos(fd, fd1, 0);
	return (0);
}
