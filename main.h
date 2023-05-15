#ifndef MAIN_H
#define MAIN_H

/**
* Filename: main.h
* Authore: E Dongijena
* Descr: A file which contains all prototypes for the simple_shell program
*/

#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int prompt(char **buff);
void processus(char **argfill, char *buf, ssize_t charactersnumbers);
int _strlen(char *str);

#endif
