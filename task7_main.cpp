#include <stdio.h>
#include "task7_func.h"

int main()
{
	x = 3.14;
	t();

	printf("x = %.4f\n", x);
	printf("f = %.4f\n\n", result);

	printf("x = ");
	scanf_s("%f", &x);
	t();
	printf("f = %.4f\n", result);

	return 0;
}