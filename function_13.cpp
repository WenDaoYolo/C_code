#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ֲ��Ҹ���

//ð������
void arrysort(int* p,int num) {
	for(int i=1;i<num;i++)
		for (int j = 0; j < num - i; j++) {		//-iÿ���ų���һ�����������������Ҫ����
			if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
}
//���ֲ���
void arryfind(int* pp,int num,int num2){
	int left = 0, right = num - 1, mid;
	while (left<=right) {
		mid = (left + right) / 2;
		if (pp[mid] == num2) {
			printf("�ҵ���\n");
			break;
		}
		else if (pp[mid] < num2) {
			left = mid + 1;
		}
		else
			right = mid - 1;

	}
	if (left > right)
		printf("û�ҵ�\n");

}





int main() {
	int arry[10],x;
	int numlong = sizeof(arry) / sizeof(int);
	printf("������10������");
	for (int i = 0; i < 10; i++)
		scanf("%d",&arry[i]);
	arrysort(arry,numlong);
	printf("�����:");
	for (int i = 0; i < 10; i++)
		printf("%d ", arry[i]);
	putchar('\n');
	printf("������Ҫ���ҵ���:");
	scanf("%d",&x);
	arryfind(arry, numlong, x);
}