#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int extern_test = 2024;	//�����ⲿȫ�ֱ���extern_test
static int extern_test02 = 2025;//���Ǳ�static���ε��ⲿȫ�ֱ�����
								//Ϊ�ڲ����������޷����ӵ�����Դ�ļ���ʹ��
void extern_function(int a,int b){	//�����ⲿ����extern_function
	int c = a + b;
	printf("I am extern_function\t%d\n",c);
}
void extern_function02() {			//���Ǳ�static���ε��ⲿ����extern_function02
	printf("No!\n");				//Ϊ�ڲ����������޷����ӵ�����Դ�ļ���ʹ��
}