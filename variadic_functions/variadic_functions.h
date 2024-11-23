#ifndef VARIADIC_HEAD
#define VARIADIC_HEAD
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct data_types {
  char *type;
  void (*func)();
} list;

#endif
