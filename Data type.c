#include<stdio.h>
int main() {
	int a = 1;
	char b = 'b';
	short int c = 2;
	long int d = 3;
	long long e = 4;
	float f = 1.2f;
	double g = 1.33;
	printf("�����ļ����������ͼ���ռ��С:\n");
	printf("int:%d\n", sizeof(int));
	printf("char:%d\n", sizeof(char));
	printf("short int:%d\n", sizeof(short int));
	printf("long int:%d\n", sizeof(long int));
	printf("long long:%d\n", sizeof(long long));
	printf("float:%d\n", sizeof(float));
	printf("double:%d\n", sizeof(double));

	printf("sizeof������Ŀռ��С:\n");
	printf("float g=1.33ռ%d���ֽ�\n", sizeof(g));
	return 0;

}