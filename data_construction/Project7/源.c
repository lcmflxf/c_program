//ע����Ե�ʱ��Ķ�������Ӣ�ĸ�ʽ//
//����������һ����̬����//

#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

struct Student {                                    //����Student�ṹ��
	long num;
	float score;
	struct Student*next;                            //ָ����һ���ṹ��
};

int n;

struct Student*creat(void) {                         //����һ��ָ��ֵ�ĺ���
	struct Student*head;
	struct Student*p1, *p2;
	n = 0;                                           //n��Ϊ������
	p1 = p2 = (struct Student *)malloc(LEN);         //����һ����ΪLEN���ڴ����������Ϊstruct Student�������ݵ�ָ��
	scanf_s("%ld,%f", &p1->num, &p1->score);         //�����һ����num��score����
	head = NULL;
	while (p1->num != 0) {
		n = n + 1;
		if (n == 1) head = p1;                       //�����һ������ʱ ����head��p1��p2���ڵ�һ��������
		else p2->next = p1;                          //��֮��������ʱ ���ѵ�һ�����ݣ�p2����.next��鵽��p1һ��
		p2 = p1;                                     //p2׷��p1
		p1 = (struct Student *)malloc(LEN);          //���¿���һ���µ�����Ҳ����Ϊ�˴����һ������
		scanf_s("%ld,%f", &p1->num, &p1->score);     //������һ������
	}
	p2->next = NULL;                                 //��󣬰����һ�����ݶ�Ӧ��.next����NULL
	return (head);                                   //////////////////////////
}                                                                            //
int main() {                                                                 //
	struct Student*pt;                                //��̬����             //
	pt = creat();                                                            //
	printf("\nnum:%ld\nscore:%5.1f\n", pt->num, pt->score);//�������//////////
	return 0;
};