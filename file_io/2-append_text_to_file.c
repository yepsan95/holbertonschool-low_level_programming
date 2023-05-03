#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to be opened
 * @text_content: NULL terminated string to append to the file
 *
 * Return: 1 on success, -1 on failiure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0';)
			len++;
	}

	fd = open(filename, O_RDWR | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		if (write(fd, text_content, len) == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
