#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {

	/*
	//�ַ�����������(ASCLL��)���Զ�ת��---��ֵ�����
	//�ַ�����ֵ��ֵ�����ͱ���ʱ��ֵ���ַ���Ӧ��ASCLL��	          ���ͬ��
	//������ֵ��ֵ���ַ��ͱ���ʱ��ֵ��ʮ����ASCLL���Ӧ���ַ�     ���ͬ��
	 ����ԭ�ͣ�
	 int getchar(void);
	 putchar(����);

	getchar()����:����(������˶�ȡ)һ���ַ�������(��������Ϊint�����Է��ص����ַ���ASCLL��)   һ���븳ֵһ����:xxx=getchar()
											  xxxΪchar����ֵascll��Ӧ�ַ�(�ַ�����ASCLL���Զ�ת��)��xxxΪ������ֵASCLL��
	putchar(����):���һ���ַ�

	*/

	int a = 'A';
	char b = 97;							//��ֵת��
	printf("%c:%d\n", a, b);
	int test1;
	test1 = getchar();
	char test2 = test1;
	printf("getchar_int:%d\n", test1);		//���ת��
	printf("getchar_char:%c\n", test1);
	putchar(97);							
	putchar('A');
	putchar(test2);
	


	return 0;
}