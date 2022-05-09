# 0x18. C - Dynamic libraries
## libdynamic.so - Create the dynamic library libdynamic.so containing all the functions listed below:
- int add(int a, int b);
- int sub(int a, int b);
- int div(int a, int b);
- int mul(int a, int b);
- int mod(int a, int b);
- int _islower(int c);
- int _putchar(char c);
- int _abs(int i);
- int _isalpha(int c);
- int _isdigit(int c);
- char *_strncpy(char *dest, char *src, int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strpbrk(char *s, char *accept);
- char *_memset(char *s, char b, unsigned int n);
- char *_strchr(char *s, char c);
- char *_strstr(char *haystack, char *needle);
- int _atoi(char *s);
- unsigned int _strspn(char *s, char *accept);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- int _strlen(char *s);
- void _puts(char *str);
- char *_strncat(char *dest, char *src, int n);
- char *_strcpy(char *dest, char *src);
- int _isupper(int c);
## 1-create_dynamic_lib.sh - Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
- Write a blog post describing the differences between static and dynamic libraries:
- https://www.linkedin.com/pulse/dynamic-libraries-marcela-carrasco-piaggio/
## Advance Project
- 100-operations.so - Create a dynamic library that contains C functions that can be called from Python
