#include "main.h"

/**
 * read_textfile -  function that reads a text file and
 *	prints it to the POSIX standard output.
 * @filename: a pointer to the file to read from
 * @letters: the size to read
 * Return: the actual size read and printed if success
 *	NULL - if the function or filename fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file, read_file, write_file;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	if (open_file == -1 || read_file == -1 || write_file == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(open_file);
	return (write_file);
}
