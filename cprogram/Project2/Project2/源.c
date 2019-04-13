#include <stdio.h>
int main()
{
	while (1)
	{
		int n; int r; int a;
		printf("请输入数字n=");
		scanf_s("%d",&n);
		a = 0;
		if (n < 3)
			printf("请输入大于或等于3的数字\n");
		else
		{
			for (int i = 2; i < n; i++)
			{
				r = n % i;
				if (r == 0)
					a = 1;
				break;
				i = i + 1;
			}
			if (a == 1)
				printf("n不是素数\n");
			else
				printf("n是素数\n");

		}			
	}
}
