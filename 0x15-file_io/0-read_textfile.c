#include "main.h"
/**
 * read_textfile-a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: filename
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _fd;
	char *buffer;
	ssize_t _read_bytes, _write_bytes;

	if (filename == NULL)
		return (0);
	_fd = open(filename, O_RDONLY);
	if (_fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(_fd);
		return (0);
	}
	_read_bytes = read(_fd, buffer, letters);
	close(_fd);
	if (_read_bytes == -1)
	{
		free(buffer);
		return (0);
	}
	_write_bytes = write(STDOUT_FILENO, buffer, _read_bytes);
	free(buffer);
	if (_read_bytes != _write_bytes)
	{
		return (0);
	}
	return (_write_bytes);
}
