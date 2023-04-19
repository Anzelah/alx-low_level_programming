#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);
int (*get_op_func(char *s))(int, int);

#endif  /* FUNCTION_POINTERS_H */
