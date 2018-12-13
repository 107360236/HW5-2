#include <stdio.h>
#include <stdlib.h>
#define TYPE 11

void BinarySearch(int* d,int a,int i);

int main(void)
{
	int a, d[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("You want to search number is:\n");
	scanf_s("%d", &a);
	BinarySearch(d[5], a, TYPE);
	
	system("pause");
	return 0;
}
void BinarySearch(int* d,int a,int i)
{
	if (a > *d)
	{
		d = d + (i / 2 + 1) / 2 + 1;
		BinarySearch(d, a, i);
	}
	else if (a < *d)
	{
		d = d - (i / 2 + 1) / 2 + 1;
		BinarySearch(d, a, i);
	}
	else if (a == *d)
	{
		printf("Your number is exist in array = %d", a);
	}
	else
		printf("return -1\n");
}