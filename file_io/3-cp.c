#include "main.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	res = cp(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}

/**
 * cp - copies the content of a file to another file
 * @file1: name of the file from which the text will be copied
 * @file2: name of the file to where the text will be copied
 * @text_content: NULL terminated string to append to the file
 *
 * Return: 1 on success, -1 on failiure
 */
int cp(const char *file_from, const char *file_to)
{
	int fd1, fd2, len;
	char buffer[1024];

	if (file_from == NULL || file_to == NULL)
		return (-1);

	fd1 = open(file_from, O_RDONLY, S_IRUSR | S_IWUSR);
	if (fd1 == -1)
		return (-1);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 436);
	if (fd2 == -1)
		return (-1);
	if (read(fd1, buffer, 1024) == -1)
	{
		close(fd1);
		close(fd2);
		exit(98);
	}
	for (len = 0; buffer[len] != '\0';)
		len++;
	if (write(fd2, buffer, len) == -1)
	{
		close(fd1);
		close(fd2);
		exit(99);
	}
	close(fd1);
	close(fd2);

	return (1);
}
