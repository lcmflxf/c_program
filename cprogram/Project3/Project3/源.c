#include <stdio.h>
int main()
{
	int a[10] = { 0 };
	int m, n;
	for (m = 0; m < 10; m++)
	{
		printf("�������%d����:", m + 1);
		scanf("%d", &a[m]);
	}
	int max = a[0];
	int sec_max = a[0];
	for (n = 0;n < 10; n++)
	{
		if (max < a[n])
		{
			sec_max = max;
			max = a[n];
		}
		else if (sec_max < a[n])
			sec_max = a[n];
	}
	printf("\n��������:%d\n", max);
	printf("�����ֵ������%d\n", sec_max);
	
}
