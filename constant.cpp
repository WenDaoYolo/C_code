#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 10000 //Ԥ���������ı�ʶ������,��������ѧ�ж���PI�̶�Ϊ3.14
#include<stdio.h>
int main() {
	
	int a = 10;
	a = 20;
	const int b = 10;
	printf("����a=%d,const���εĳ�����b=%d\n",a,b);
	int arr[b] = { 0 };//����ĳ���ֻ��ָ��Ϊ�������������Ѿ����õ������ռ䲻���ٸı䣩
	for (int n = 0; n < b;n++) {
		printf("%d\n",arr[n]);
	}
	printf("#define����ı�ʶ������MAX=%d\n",MAX);
	enum Sex { MALE,FEMALE=9 };//�Զ����ö�ٳ�����������Sex
	enum Sex t = MALE;
	enum Sex m = FEMALE;
	printf("�����Զ����ö�ٳ�����������MALE��δ����ֵ��Ĭ��ֵΪ��%d\n", t);//ö�ٳ����ӵ�һ��Ԫ�ؿ�ʼ����δ����ֵ������ֵĬ�Ϲ̶�Ϊ0��������������
	printf("�����Զ����ö�ٳ�����������FEMALE,�Ҹ��˳�ֵ��%d", m);
	return 0;
}