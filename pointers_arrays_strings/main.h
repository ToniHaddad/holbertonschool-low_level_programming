#ifndef FILE_HOLBERTON
#define FILE_HOLBERTON

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
#endif
