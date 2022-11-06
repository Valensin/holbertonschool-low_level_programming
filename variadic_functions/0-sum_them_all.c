#include "variadic_functions.h"
/**
  * sum_them_all - retunrs the sum of all its parameters.
  * @n: The number of parameters passed ot the function.
  *
  * Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (x < n)
		{
			sum += va_arg(args, int);
			x++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
