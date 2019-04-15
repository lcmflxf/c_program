//枚举类型的应用：口袋中由红黄蓝白黑5种颜色的球若干个，每次从口袋中先后取出3个球，输出所有的排列情况//
//定义枚举的时候，固定后者比前者大一，yellow>red;//
#include<stdio.h>

int main() {
	enum Color {red,yellow,blue,white,black};                      //定义枚举类型
	enum Color i, j, k, pri;                                       //定义枚举变量
	int n, loop;
	n = 0;                                                         //定义回合数
	for (i=red;i<=black;i++)
		for (j=red;j<=black;j++)
			if (i != j) {
				for (k=red;k<=black;k++)
					if ((k != i) && (k != j)) {
						n = n + 1;
						printf("%-4d", n);
						for (loop = 1; loop <= 3; loop++) {
							switch (loop) {
							case 1:pri = i; break;
							case 2:pri = j; break;
							case 3:pri = k; break;
							default:break;
							}
							switch (pri) {
							case red:printf("%-10s", "red"); break;
							case yellow:printf("%-10s", "yellow"); break;
							case blue:printf("%-10s", "blue"); break;
							case white:printf("%-10s", "white"); break;
							case black:printf("%-10s", "black"); break;
							default:break;
							}
						}
						printf("\n");
					}
			}
	printf("\ntotal:%5d\n", n);
	return 0;
}