#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {

	//scanf��getchar�����ʹ�ã�����Ҫ���ǻ�����������
	char password[20];
	int Flag = 0;
	int temp = 0;
	printf("����������\n");
	scanf("%s", password);		//��������������ĵ�ַ
	getchar();					//getchar��ȡ���������������
	printf("ȷ������(Y/N)\n");
	while ((temp = getchar()) != '\n')//һ��getcharֻ�����һ�����ݣ������������ڶ�����ݣ�getchar��ѭ�����ÿ������������ݣ�ֱ����ȡ���س��ͽ���ѭ��
		;								//�����
		Flag = getchar();			//��ʱ����ȡû���������ݣ��ȴ�������������ݺ�getchar���ܶ�ȡ����ȷ��������
	if (Flag == 'Y')			//���ͺ��ַ��ͣ����Զ�ת����Ascll���ٽ��бȽ�
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");

	/*
		ѭ������getchar��Ӧ�ó�������>��������������Ķ������
		��չ1��scanf����ʹ���ַ�����ʽ(%s)��ȡ����,��ȡ��\0(�ַ����Ľ�����־),�ո�,����,�Ʊ����ʱ��ֹͣ��ȡ����
		����:
		��ʱ��scanf����������:123456 abcde�س�
		scanf��ʱֻ���ȡ��123456
		������������:�ո�abcde�س�		 ��ʱ����getcharֻ�����һ�����ݣ��������ѭ���ķ�ʽ�����
		int temp=0;
		while((temp=getchar())!='\n');	��ȡ���س��ͽ���ѭ��(���line13)

	*/
	return 0;
}