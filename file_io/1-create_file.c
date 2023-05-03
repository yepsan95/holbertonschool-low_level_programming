#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 omn failiure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, wr_return;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0';)
			len++;
	}
	
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	wr_return = write(fd, text_content, len);
	if (fd == -1 || wr_return == -1)
		return (-1);
	close(fd);

	return (1);
}
