#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	/*
		do while��whileѭ��һ��,Ψһ������do while���ٻ�ִ��һ��
		
		do{
			ѭ�����
			...			�����	
		}while(����);		
	
	*/
	//����ѭ������ϰ
	int n,i=1,value1 = 1;
	printf("������n:\n");
	scanf("%d",&n);
	while (i <= n) {
		value1 = (value1) * i;
		i++;
	}
	printf("%d�Ľײ���:%d\n",n,value1);
		
	int sum = 0,value2=1;
	for (int j = 1; j <= 10; j++) {
		for (int k = 1; k <= j; k++)
			value2 *= k;			//�ײ�ļ���
				sum += value2;		//�ײ������ۼ�
					value2 = 1;		//��ʼ���ײ����value2
	}
	printf("1��10�ײ�ĺ�Ϊ:%d\n",sum);

	/*
		�㷨�Ż�:������ѧ˼��
		3!=3*2*1
		2!=2*1
		1!=1
		����3!=3*2!
			2!=2*1!
			1!=1
	*/
	int test = 1,test2=0;
	for (int m = 1; m <=10; m++) {	//ͨ����ǰ�ײ�����һ���ײ�Ľ���������ٵ�������ѭ������
		test *= m;		//�Ż�����һ��ѭ��	�����ü���ײ����������ʹ������������һ���ײ�
		test2 += test;
	}
	printf("�㷨2:%d\n",test2);
	return 0;
}