#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	/*
	break����(����)��ǰѭ��/�ṹ
	continue����(����)����ѭ��/�ṹ (<����conitue����Ĵ���>,������һ��ѭ��)

	while(���ʽ)			���ʽΪ����������鲢ִ��
	{
		�����
		...
	}
	*/
	int i = 1, j = 1, k = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}
	while (k <= 10) {
		if (k == 5)
			break;				//i==5ʱ����ѭ��
		printf("%d\n", k);
		k++;

	}
	/*
	while (j <= 10) {
		if (j % 5 == 0)	//j==5ʱ��ʼ��ѭ��(�������-->j==5�������j++,��ʱj���仯С��10�ֽ���ѭ��Ȼ��������j++...)
			continue;
		printf("%d\n", j);
		j++;
	}
	*/
	return 0;
}
