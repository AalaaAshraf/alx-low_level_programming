#include <studio.h>

/**
 * main -entry point
 *
 * description :using sizeof to print the size of various types.
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	print("Size of a char : %u byte(s)\n", sizeof(char));
	print("Size of an int : %u byte(s)\n", sizeof(int));
	print("Size of a long int : %u byte(s)\n", sizeof(long int));
	print("Size of a long long int : %u byte(s)\n", sizeof(long long int));
	print("Size of a float : %u byte(s)\n", sizeof(float));
	return (0);
}
