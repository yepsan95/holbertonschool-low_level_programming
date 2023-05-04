#include "main.h"
/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd1, fd2, len;
	char *file_from, *file_to, buffer[1024];
	struct stat st;

	if (ac != 3)
		exit_97(av[0]);
	file_from = av[1];
	file_to = av[2];
	fd1 = open(file_from, O_RDONLY, S_IRUSR | S_IWUSR);
	if (fd1 == -1)
		exit_98(av[1]);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 436);
	if (fd2 == -1)
		exit_99(av[2]);
	fstat(fd1, &st);
	len = st.st_size;
	if (read(fd1, buffer, 1024) == -1)
		exit_98(av[1]);
	if (write(fd2, buffer, len) == -1)
		exit_99(av[2]);
	if (close(fd1) == -1)
		exit_100(fd1);
	if (close(fd2) == -1)
		exit_100(fd2);

	return (0);
}

/**
 * exit_97 - exits the program with code 97 and prints a message
 *           Use case: if the number of arguments passed to the
 *           program is not 2
 * @filename: name of the executable file
 *
 * Return: void
 */
void exit_97(char *filename)
{
	dprintf(2, "Usage: %s file_from file_to\n", filename);
	exit(97);
}

/**
 * exit_98 - exits the program with code 98 and prints a message
 *           Use case: if file_from does not exits, or if you
 *           can not read it
 * @file_from: name of the file whose contents are to be copied
 *
 * Return: void
 */
void exit_98(char *file_from)
{
	dprintf(2, "Error: Can't read from file %s\n", file_from);
	exit(98);
}

/**
 * exit_99 - exits the program with code 99 and prints a message
 *           Use case: if you can not create or if write to
 *           file_to fails
 * @file_to: name of the file where the contents will be copied
 *
 * Return: void
 */
void exit_99(char *file_to)
{
	dprintf(2, "Error: Can't write to %s\n", file_to);
	exit(99);
}

/**
 * exit_100 - exits the program with code 100 and prints a message
 *            Use case: if a file descriptor can not be closed
 * @fd: number of the file descriptor
 *
 * Return: void
 */
void exit_100(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}
