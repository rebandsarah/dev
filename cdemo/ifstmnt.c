#include <stdio.h>

int main()

{
	int a = 0;
	int b = 3;
	int c = 0;

	if (a == 0)
	{
		printf("a is equal to 0\n");
	}
	else
	{
		printf("a is not equal to 0\n");
	}


	if (b != 0)
	{
		printf("b is not equal to 0\n");
	}
	else
	{
		printf("b is equal to 0\n");
	}

	if (c >= b)
	{
		printf("c is greater than b\n");
	}
	else
	{
		printf("c is not greater than b\n");
	}

	if (a == 0 && c == 0)
	{
		printf("both a and c are equal to 0\n");
	}
	else
	{
		printf("a and c are not equal to 0\n");
	} 
}
