#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	int x = 0;
	int n = 3;
	while (1) {
		printf("����whileѭ��\n");
		if (x > 2)
			break;//break��������ѭ��(ֻ��������ǰ���ڲ��ѭ��,���ѭ��Ƕ����Ҫ�ֱ��ö��break)
				  //continue��������ѭ��(ֻ��������ѭ��,������������ѭ��)
		x++;
	}
	do {
		printf("����do whileѭ��\n");
	}while(n<3);
	if (n == 2)
		printf("����ѡ�����1\n");
	else if (n == 3)
		printf("����ѡ�����2\n");
	else
		printf("����ѡ�����3\n");
	
	
	return 0;
}