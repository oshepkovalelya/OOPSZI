/*#include <stdio.h>
#include <math.h>

float t(float);
void g(float, float);

int main()
{
	float x, f;
	x = 3.14;
	f = t(x);

	g(x, f);

	scanf_s("%f", &x);
	f = t(x);
	g(x, f);

	return 0;
}

float t(float x)
{
	return (sqrt(2 * x + 2 * sqrt(x*x - 4))) / (sqrt(x*x - 4) + x + 2);
}

void g(float x, float f)
{
	printf("x = %.4f\n", x);
	printf("f = %.4f\n\n", f);
}*/