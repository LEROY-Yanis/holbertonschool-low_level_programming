#ifndef MAIN_H
#define MAIN_H

int _putchar(char i);
char *create_array(unsigned int size, char c);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);

#endif /* MAIN.H */
