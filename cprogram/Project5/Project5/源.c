#include<stdio.h>

struct Student {
	char name[20];
	int num;
	int score[3];
	int sum;
};

void sort(struct Student stu[]) {
	struct Student temp;
	int i, k, j;
	for (i = 0; i < 4; i++) {
		k = i;
		for (j = i + 1; j < 5; j++)
			if (stu[j].sum > stu[k].sum)
				k = j;
		temp = stu[k];
		stu[k] = stu[i];
		stu[i] = temp;
	}
	for (i = 0; i < 5; i++)
		printf("%s %d %d %d %d\n", stu[i].name, stu[i].num, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
}
int main() {
	struct Student stu[5], *p = stu;
	void sort(struct Student stu[]);
	int i;
	for (i = 0; i < 5; i++) {
		scanf("%s%d%d%d%d", stu[i].name, &stu[i].num, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
		stu[i].sum = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]);
	}
	sort(p);
}