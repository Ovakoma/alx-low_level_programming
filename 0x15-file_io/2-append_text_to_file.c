#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrtf, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		wrtf = write(fd, text_content, len);
		if (wrtf == -1)
		{
			close(fd);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
