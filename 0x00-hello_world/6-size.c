#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)szeof(d));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)szeof(a));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)szeof(b));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)szeof(c));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)szeof(f));
	return (0);
}
