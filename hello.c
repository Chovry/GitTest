#include <stdio.h>

int sub(int a, int b)
{
	return a - b;
}

int main()
{
	int a = 20;
	int b = 10;

	printf("Hello, World!\n");
	printf("%d - %d = %d\n", a, b, sub(a, b));

	return 0;
}
