#include <stdio.h>
int main()
{
	while (1)
	{
		int year;
		printf("请输入想要查询的年份：");
		scanf_s("%d", &year);
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d是闰年\n", year);
		else
			printf("%d不是闰年\n", year);
	}


}