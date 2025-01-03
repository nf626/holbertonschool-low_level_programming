#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects the correct function
 *               to perform the operation asked by the user.
 * @s: operator passed as argument to the program.
 *
 * Return: returns a pointer to the function
 *         that corresponds to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
	      {"/", op_div}, {"%", op_mod}, {NULL, NULL}};
int i;

while (i < 5)
{
/** s does not match any of the 5 expected operators */
if (strcmp(s, ops[i].op) == 0)
{
/** allow to access struct op - member *f */
return (ops[i].f);
}
i++;
}
return (0);
}
