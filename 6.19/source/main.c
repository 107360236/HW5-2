#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d[11] = { 0 };
	int i,j;
	srand(time(0));
	for (i = 0; i < 36000; i++)
	{
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		c = a + b;
		if (c == 2)
			d[0] = d[0] + 1;
		else if (c == 3)
			d[1] = d[1] + 1;
		else if (c == 4)
			d[2] = d[2] + 1;
		else if (c == 5)
			d[3] = d[3] + 1;
		else if (c == 6)
			d[4] = d[4] + 1;
		else if (c == 7)
			d[5] = d[5] + 1;
		else if (c == 8)
			d[6] = d[6] + 1;
		else if (c == 9)
			d[7] = d[7] + 1;
		else if (c == 10)
			d[8] = d[8] + 1;
		else if (c == 11)
			d[9] = d[9] + 1;
		else if (c == 12)
			d[10] = d[10] + 1;
	}
	j = 2;
	for (i = 0; i < 11; i++)
	{
		printf("骰出%d的次數:%d\n", j, d[i]);
		j = j + 1;
	}
	system("pause");
	return 0;
}