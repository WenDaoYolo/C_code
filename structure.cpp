#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a = 1, b = 2;
	char k = 'M';
	if (a > b)
		printf("if��֧�ṹ,a>b\n");
	else
		printf("a<b");
	for (int j = 0; j <= 10;j++) {
		printf("Forѭ��,���ǵ�%d�����\n",j);
	}
	printf("switchѡ��ѭ��\n");
	switch (k) {
	case 'M':printf("Monday"); break;
	case 'T':printf("Tuesday"); break;
	case 'W':printf("Wenday"); break;
	default :printf("other"); break;
	}
		int t = 0;
		while(t < 10) {
			printf("Whileѭ��%d��\n",t);
			t++;
		}



}