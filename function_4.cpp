#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
/*
	
	�����ĵ���
	��ֵ����	��ʵ�ε�ֵ�����β�		�β���ʵ�ηֱ�Ϊ��ͬ�ڴ�ռ�
	��ַ����	��ʵ�εĵ�ַ�����β�	�βκ�ʵ����ϵ������
	
	��������ʱ����δ���巵�����ͣ���Ĭ��Ϊint����		������������д����Ϊ�����Ϲ淶




	function��ϰ1
	��д���º���������书��

	1.�ж�һ�����ǲ�������			����(prime)
	2.�ж�����ǲ�������
	


*/
//1.����Գ���
void su1(int su){
	int i = 2;
	while (i < su) {
		if (su % i == 0)
			break;
		i++;
	}
	if (i == su)
		printf("%d������\n", su);
	else
		printf("%d��������\n",su);
}

//1.��ѧ����
void su2(int su) {
	int i = 2;
	while (i <=sqrt(su)) {
		if (su % i == 0)
			break;
		i++;
	}
	if (i>sqrt(su))
		printf("%d������\n", su);		//����������д����,�����ܱ���ģ��ĵ�һ��,ֻ����������жϼ���
	else                                //����ģ��ĵ�һ����ʹ��������ͨ��
		printf("%d��������\n", su);
}

//2. ��ѧ����			
void judgyear(int year){				   //ע��:1.�ܱ��İ�����   2.�ܱ�4���������ܱ�100����
	if ((year % 400 == 0)||(year%4==0&&year%100!=0))		// 1��2���������������������ܻ���
			printf("%d��������", year);
	else
			printf("%d�겻������", year);
}


int main() {
	int test1,test2,test3;
	printf("�ж�����\n");
	printf("������һ����:");
	scanf("%d",&test1);
	su1(test1);				
	printf("��������һ����:");
	scanf("%d", &test2);
	su2(test2);
	printf("�����������:");
	scanf("%d", &test3);
	judgyear(test3);			
	return 0;
}