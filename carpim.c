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

	int num1, num2,sonuc=0;

	printf("sayi 1 -->");
	scanf("%d", &num1);
	printf("sayi 2 -->");
	scanf("%d", &num2);

	if (num1 > num2)
	{
		num1 = num1;
		num2 = num2;
	}
	else if (num1 < num2)
	{
		swap(&num1, &num2);
	}

	for (int i = 0; i < num2; i++)
	{
		sonuc += num1;
	}
	
	printf("carpim-> %d\n", sonuc);
	
	system("pause");

	return 0;
}