#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *                 to the POSIX standard output
 * @filename: asbolute path of the file
 * @letters: the number of letters it whould read and print
 *
 * Return: the actual number of letters it could read an print,
 *         if the file cannot be opened or read, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n_bytes;
	off_t file_size;
	struct stat st;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = (char *)malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);
	stat(filename, &st);
	file_size = st.st_size;
	if (letters > (unsigned long int)file_size)
		letters = file_size;
	read(fd, buffer, letters);
	n_bytes = write(1, buffer, letters);
	close(fd);

	return (n_bytes);
}
