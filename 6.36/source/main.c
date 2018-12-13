#include <stdio.h>
#include <stdlib.h>
int StringReverse(const char *word,int i);

int main()
{
	const char a[30];
	int i;
	printf("Input char:\n");
	scanf_s("%s", a ,30 );
	StringReverse(a,29);
	printf("\n");
	system("pause");
	return 0;
}
int StringReverse(const char *word,int i)
{
	printf("%c", *(word+i));
	if (i < 30 && i!=0)
	{
		i = i - 1;
		StringReverse(word, i);
	}
	else if (i == 0)
	{
		return 0;
	}
}