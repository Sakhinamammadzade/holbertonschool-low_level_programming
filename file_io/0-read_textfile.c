#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - function to read and print text file to stdout
 * @filename: ptr to the file to read and print
 * @letters: number of bytes to print
 * Return: 0 if failed else number of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, rd, w;
char *text;
text = malloc(letters);
if (text == NULL || filename == NULL)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file == -1)
{
free(text);
return (0);
}
rd = read(file, text, letters);
w = write(STDOUT_FILENO, text, rd);
close(file);
return (w);
}
