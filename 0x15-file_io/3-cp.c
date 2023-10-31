#include "main.h"
/**
 * _show_error_and_exit-print error and exit
 * @code: code
 * @message: message
 * Return:void
 */
void _show_error_and_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}
/**
 * main-a program that copies the content of a file to another file
 * @argc: number of arguments in the command line
 * @argv: argument vector
 * Return:0
 * a program that copies the content of a file to another file.
 * Usage: cp file_from file_to
 * if the number of argument is not the correct one, exit with code 97
 * and print Usage: cp file_from file_to, followed
 * by a new line, on the POSIX standard error
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it,
 * exit with code 98 and print Error: Can't read from file
 * NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
 * where NAME_OF_THE_FILE is the first argument passed to your program
 * if you can not create or if write to file_to fails, exit
 * with code 99 and print Error: Can't write to NAME_OF_THE_FILE,
 * followed by a new line, on the POSIX standard error
 * where NAME_OF_THE_FILE is the second argument passed to your program
 * if you can not close a file descriptor , exit with code 100
 * and print Error: Can't close fd FD_VALUE, followed
 * by a new line, on the POSIX standard error
 * where FD_VALUE is the value of the file descriptor
 * Permissions of the created file: rw-rw-r--.
 * If the file already exists, do not change the permissions
 * You must read 1,024 bytes at a time from the file_from
 * to make less system calls. Use a buffer
 * You are allowed to use dprintf
 */
int main(int argc, char **argv)
{
	const char *_file_from = argv[1], *_file_to = argv[2];
	int _fd_from, _fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t _read_bytes, _write_bytes;
	mode_t old_mask;

	if (argc != 3)
		_show_error_and_exit(97, "Usage: cp file_from file_to");
	_fd_from = open(_file_from, O_RDONLY);
	if (_fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", _file_from);
			exit(98);
	}
	old_mask = umask(0), _fd_to = open(_file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH), umask(old_mask);
	if (_fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", _file_to), exit(99);
	}
	while ((_read_bytes = read(_fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		_write_bytes = write(_fd_to, buffer, _read_bytes);
		if (_write_bytes <= 0 || _write_bytes != _read_bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", _file_to), exit(99);
	}
	if (_read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", _file_from);
		exit(98);
	}
	if (close(_fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _fd_from), exit(100);
	}
	if (close(_fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", _fd_to), exit(100);
	}
	return (0);
}
