#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp(const char *file_from, const char *file_to);
void exit_97(char *filename);
void exit_98(char *file_from);
void exit_99(char *file_to);
void exit_100(int fd);

#endif /*MAIN_H*/
