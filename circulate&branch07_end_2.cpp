#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main() {
	/*
	��д���룬ʵ�ֶ���ַ��������ƶ������м���
	welcome to c program!
	w###################!
	we#################m!
	wel###############am!
	welc#############ram!
	...
	welcome to c program!
	�򵥵�����޷��ﵽ��̬Ч��
	ʵ��˼·��ÿ�������һ��,ͣ��һС����ٽ��������Ȼ��������һ��,
			  ������ʱ�ͳ���ִ���ٶȼ�������ԴӶ��ﵽ�Ӿ���Ч��

	ԭ��:���,ͣ��,����+���,ͣ��,����+���,ͣ��,����+���...	
	��һ��ִ�г�����Ļû���κ��������Բ�������

	*/
	/*
	ͷ�ļ�<windows.h>
	Sleep(����)	˯�ߺ������õ�ǰ�߳���ʱ����һ��ʱ���˯��,�Ӷ��ﵽ��ʱִ�д����ȴ���Ч��,ʱ�䵥λms
	system("ָ��")    ����ϵͳ����:��ִ��ִ�в���ϵͳ�������ָ���ػ������ļ��Ȳ���..
	clsָ��:clear screen �����Ļ
	*/
	char arry1[] = "#####################";
	char arry2[] = "welcome to c program!";
	int i = 0, j = (sizeof(arry1)-1)/sizeof(char)-1;
	for (i,j; i<=j; i++,j--){
		arry1[i] = arry2[i];
		arry1[j] = arry2[j];
		printf("%s\n", arry1);		//�ַ����鱾���Ͼ����ַ���
		Sleep(1000);
		system("cls");
	}
	printf("%s\n", arry1);			//�������ִ���������������������Ӿ�Ч��
	
	return 0;
}