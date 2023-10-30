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
	off_t _file_size;
	size_t _read_size;
	struct stat file_stat;

	if (filename == NULL)
		return (0);
	_fd = open(filename, O_RDONLY);
	if (_fd == -1)
	{
		perror("Error opening the file");
		return (0);
	}
	if (fstat(_fd, &file_stat) == -1)
	{
		close(_fd);
		perror("Error getting file size");
		return (0);
	}
	_file_size = file_stat.st_size;
	if ((off_t)letters < _file_size)
		_read_size = letters;
	else
		_read_size = (size_t)_file_size;
	buffer = malloc(sizeof(char) * (_read_size + 1));
	if (buffer == NULL)
	{
		close(_fd);
		perror("Error allocating memory for buffer");
		return (0);
	}
	_read_bytes = read(_fd, buffer, _read_size);
	if (_read_bytes == -1)
	{
		close(_fd);
		free(buffer);
		perror("Error reading from file");
		return(0);
	}
	buffer[_read_bytes] = '\0';
	_write_bytes = write(STDOUT_FILENO, buffer, _read_bytes);
	if (_write_bytes == -1 || (size_t)_write_bytes != _read_size)
	{
		close(_fd);
		free(buffer);
		perror("Error writing to standard output");
		return (0);
	}
	close(_fd);
	free(buffer);
	return (_write_bytes);
}
