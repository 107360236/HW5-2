#include <stdio.h>
#include <stdlib.h>

int maximum(int *a, int i);

int main(void)
{
	int size, a[10] = { 0 };
	printf("Write your array size(maximum is ten):");
	scanf_s("%d", &size);
	printf("Input your array:\n");
	for (int i = 0; i < size; i++)
		scanf_s("%d",&a[i]);
	size = size - 1;
	printf("The maximum is %d .\n",maximum(a,size));
	system("pause");
	return 0;
}
int maximum(int *a,int i)
{
	int *max = a;//max�����Ы��Va����}
	if (i < 10 && i >= 0)
	{
		i = i - 1;
		if (*a < *(a + 1))
			*max = *(a + 1);//max����=(a+1)��}����
		else
			*max = *a;//max����=a��}����
		maximum((max + 1), i);
	}
	if (i<0)
		return *max;
}