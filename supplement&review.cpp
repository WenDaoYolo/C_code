#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
typedef unsigned int ui;

void fun1(int a, int b){//�����ڲ�������Ҫ�����Ҫ����Ӷ���֤������<ͨ����>(����)
	if (a >= b)				//void ��int
		printf("%d\n",a);		//return a;		ע�⺯���ķ���ֵ��һ��Ψһ����������(�ǿ�����)
	else
		printf("%d\n",b);		//return b;
}

int main() {
	/*
	�ַ���������ָ�ֵ��ʽ:
	char[]={'a','b','c','\0'};���ַ�ʽ������ӽ�����
	char[]=-"abc";�ַ���ʽ��Ĭ���Զ���ӽ�����
	*/							//����:
	char arr[] = { 't','r','s'};//strlen():�ַ�������(�ַ�����)���㺯��
								//sizeof():��������ռ�ÿռ�(�ֽ�)
	printf("%d\n",strlen(arr));	//��Ϊ���ַ����鸳ֵ(���ַ�����һ����ʽ)û�н�����\0,���Լ�����Ԫ�ظ���ʱΪ���ֵ����
	char arr3[] = "hello";
	printf("improve:%d\n", strlen(arr3));//�ַ����ĸ�ֵ��ʽ���ַ��������Ĭ����\0
	char arr2[] = { 't','r','s','\0' };		//�����ʼ��ʱ���ɲ��ø�ֵ����(���Զ����ݳ�ʼ��������������������)
	printf("Int:%d\n", strlen("Int"));
	printf("Int memorry:%d\n", sizeof("Int"));	//�ַ�����\0(ת���ַ�Ҳռһ���ֽڿռ�)����������ռ�ÿռ���Ϊ�ַ���+1
	printf("%d\n", strlen(arr2));
	printf("�˽���ת���ַ�:\130\n");			//ת���ַ���ת��Ϊ��ʮ���ƶ�Ӧ��ASCLL�ַ�
	printf("ʮ������ת���:\x58\n");
	//�䳤����(�����鳤�ȿ��Զ���Ϊ����������<���ܳ�ʼ��>)--ֻ��֧��C99�ı�׼�ı���������ʹ�õ��﷨
	int n = 10;		
	arr[10];	//���Զ���,˵��VS2022֧��C99��׼	--:�䳤�����ݲ�����
	int a, b,d;
	d = strlen("c:\test\121");
	printf("%d\n", d);
	printf("��������������:\n");//printf�����ʽ�������涨���ݵ������ʽ
	scanf("%d-%d",&a,&b);		//scanf�����ʽ����,�涨��������ĸ�ʽ
	fun1(a,b);					
	ui y = 3;				//�Զ�����������ui����
	printf("%d",y);
	return 0;



}
