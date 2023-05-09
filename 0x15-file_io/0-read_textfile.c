#include "main.h"

/**
  *read_textfile - reads a text file and prints it to the POSIX standard output
  *@filename: pointer to the fileto be red loction
  *@letters: number of letters
 * Return: if success return number of letter, else return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	char *buffer;
	ssize_t read_bytes, written_bytes;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file  == -1)
	{
		return (0);
	}
	buffer = (char *) malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}
	read_bytes = read(file, buffer, letters);
	if (read_bytes == -1)
	{
		return (0);
	}
	buffer[letters + 1] = '\0';
	close(file);
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes == -1)
	{
		return (0);
	}
	free(buffer);
	return (read_bytes);
}
