#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>	

void test01(){
	int a = 3;	//�ֲ�����
}
int main() {
	//�ؼ���	ϵͳ�ṩ�ı�ʶ��,����һ���ĺ���,�����������ݵ����κͶ���
	//��int,float,const,continue,default,if,else,enum
	//auto(�Զ�����,ÿ���ֲ�������Ĭ�ϱ�auto���ο���ʡ��,�Զ���������������������scope,���Զ�����)
	//auto�������﷨�е�����---�ݲ������о�
	/*
	extern:�����ⲿ����
	register:�Ĵ����ؼ���	--Ӧ�ó���:��������ظ����õ����ݷ���洢��,���ٶȸ���
	---�ְ汾��������������,��ʹ������Ҳ���Զ����������ݷ���Ĵ���
	���ε����ᱻ�������Ĵ�����(�Ƿ����ȡ���ڱ�����)
	cpu��д�洢���ٶ�:�Ĵ���>���ٻ���>�ڴ�>���
	return:���غ������,��void������,�������ͺ�����Ҫ�з���ֵ---�����Ĺ淶��
	signed:�з�������(+,-)
	unsiged:�޷�������
	static:��̬����
	struct,switch,goto,void...
	typedef:�Զ�����������				type define
	union:������(������)
	volatile					�Ƚ��ѣ��ݲ�����


	*/
	register int value1 = 3;
	static int value2 = 4;
	unsigned int value3 = 4;


	test01();
	return 0;//�����Ĺ淶��
}