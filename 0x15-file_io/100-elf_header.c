#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void view_header(int fd, Elf64_Ehdr *the_header)
{

