#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	 //ת���ַ���ͨ��\���,ת����ԭ������˼���������⺬��
	printf("ab\ncd\n");//����
	printf("C:\test\team\n");//ˮƽ�Ʊ�
	printf("\a");//������ʾ-����
	//��ת���ַ������������ַ����,\+���������ַ�
	//ת���ַ��ǵ����ַ���Ҳռһ���ֽڵĿռ�
	printf("%s", "\"");
	printf("%c", '\'');
	printf("%c", '\\');
	//other:\b,\r,\f,\v,\ddd(8����),\xdd(16����)
	//ÿ���ַ����ж�Ӧ��ʮ����ASCLL�룬
	//���ַ���������ʽ���ʱ�������Ӧ��ASCLL�룬��֮��Ȼ
	printf("%d", 'a');
	printf("%c",65);
	//���ASCLL����ձ�
	return 0;
}