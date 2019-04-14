//注意调试的时候的逗号需是英文格式//
//仅仅是生成一个动态链表//

#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

struct Student {                                    //建立Student结构体
	long num;
	float score;
	struct Student*next;                            //指向下一个结构体
};

int n;

struct Student*creat(void) {                         //带回一个指针值的函数
	struct Student*head;
	struct Student*p1, *p2;
	n = 0;                                           //n即为结点个数
	p1 = p2 = (struct Student *)malloc(LEN);         //开辟一个长为LEN的内存区并将其改为struct Student类型数据的指针
	scanf_s("%ld,%f", &p1->num, &p1->score);         //导入第一个的num和score数据
	head = NULL;
	while (p1->num != 0) {
		n = n + 1;
		if (n == 1) head = p1;                       //导入第一次数据时 ，把head和p1，p2捆在第一个数据上
		else p2->next = p1;                          //再之后导入数据时 ，把第一组数据（p2）的.next项归到和p1一起
		p2 = p1;                                     //p2追上p1
		p1 = (struct Student *)malloc(LEN);          //重新开辟一块新的区域，也就是为了存放下一组数据
		scanf_s("%ld,%f", &p1->num, &p1->score);     //补充下一组数据
	}
	p2->next = NULL;                                 //最后，把最后一组数据对应的.next项归给NULL
	return (head);                                   //////////////////////////
}                                                                            //
int main() {                                                                 //
	struct Student*pt;                                //动态链表             //
	pt = creat();                                                            //
	printf("\nnum:%ld\nscore:%5.1f\n", pt->num, pt->score);//输出首项//////////
	return 0;
};