#include <stdio.h>
int main()
{
	while (1)
	{
		int n; int r; int a;
		printf("����������n=");
		scanf_s("%d",&n);
		a = 0;
		if (n < 3)
			printf("��������ڻ����3������\n");
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
				printf("n��������\n");
			else
				printf("n������\n");

		}			
	}
}
