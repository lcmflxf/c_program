#include <stdio.h>
int main()
{
	while (1)
	{
		double sign; double sum; double deno; int n; double term;
		sign = 1;
		sum = 1;
		deno = 2;
		printf("ÇëÊäÈënµÄÖµ=");
		scanf_s("%d", &n);
		for (double i = 1; i < n; i++)
		{
			sign = (-1) * sign;
			term = sign * (1/deno);
			sum = sum + term;
			deno = deno + 1;
		}
		printf("sum=%.3f\n\n", sum);
	}
}
