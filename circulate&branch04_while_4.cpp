#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	/*
	* ���뺯���뻺����
	ʵ��:scanf(��)��getchar(��)�����ʹ�á�������>�����������ʵ�ʶ�ȡ�������
	������
	���뺯����scanf�Ⱥ�getchar������ԭ��һ�����������scanf<����ʶ��س�(ת���ַ�\n)>
	��������������ݺ�scanf���ȡ���˻س�����������ַ�
	��������ʣ��һ��\n,����ʱgetchar�жϻ����������ݻ�ֱ�Ӷ�ȡ���Ӷ����getchar��ȡ�Ĳ�����ȷ����
	������Ҫ��getchar֮ǰ�������������\n       ����������ټ���һ��getchar��ר�����������
	*/
	int a, b;
	printf("������:\n");			//scanf�����ȡ\n�����ֻ��scanf�������ظ����벻��Ҫ���ǻ�����������
	scanf("%d", &a);
	if (a == 1)
		printf("Yes\n");
	printf("��������:\n");
	scanf("%d", &b);
	if (b == 2)
		printf("No\n");

	return 0;
}

