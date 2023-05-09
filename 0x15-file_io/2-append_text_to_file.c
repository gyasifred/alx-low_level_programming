#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: pinter to the location of the filee
 * @text_content: text
 * Return: 1 - success, -1 error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	unsigned int len;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	len = strlen(text_content);

	bytes_written = write(file, text_content, len);
	if (bytes_written == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
