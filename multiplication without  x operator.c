#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{

	int num1, num2, conculusion = 0;

	printf("first number -->");
	scanf("%d", &num1);
	printf("second number -->");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		num1=num1;
		num2=num2;

	}
	else if (num1 < num2)
	{
		swap(&num1, &num2);
	}
	

	for (int i = 0; i < num2; i++)
	{
		conculusion += num1;
	}

	printf("conculusion -> %d\n", conculusion);

	system("pause");

	return 0;
}
