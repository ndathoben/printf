#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /*for varyadic functions*/
#include <stdlib.h> /*for malloc and NULL*/
#include <unistd.h> /*for write*/
#include <limits.h> /* for test cases*/

/**
 * struct special_cases - struct for the special cases
 * @match: the special character to match after find a percentage
 * @function: the associated function to be called in each specialcase
 */

typedef struct special_cases
{
	char *match;
	int (*function)(va_list);
} spc_t;

/*format and print data*/
int _printf(const char *format, ...);

/*writes the character c to stdout*/
int _putchar(char c);

#endif /*MAIN_H */
