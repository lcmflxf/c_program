#include <stdio.h>
int main()
{
	while (1)
	{
		int year;
		printf("��������Ҫ��ѯ����ݣ�");
		scanf_s("%d", &year);
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			printf("%d������\n", year);
		else
			printf("%d��������\n", year);
	}


}