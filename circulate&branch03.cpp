#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*	
    <���˼·>---���ִ����﷨֮�䶼�������ͨ�ģ����ƴ�ͳ�Ĺ̶�˼ά��Ҫѧ����������Ϻ�Ƕ��(���������,�����������һ��)
	
	ѭ��circulate&��֧branch
	��֧ѭ���Ƚṹ�ڷǴ������������Ĭ�����÷�ΧΪһ��
	if(xxx)
		xxxxx		һ�з�Χ
	for(xxx;xxx;xxx)
		xxxxx		һ�з�Χ
	for(xxx;xxx;xxx)
	{		����飺��ΧΪ���������
			....
			....
	}
	˳��ṹ

	ѡ��ṹ(��֧���)
	if:
	if else,else

	switch:	�����ڶ��֧�������if����Ӽ��
	case,break,default

	ѭ���ṹ
	for				tip:C++��C99��׼��֧����дforѭ��ʱ��������->for(int a=0;a<100;a++)
	while
	do while

	goto���

	רҵ����:
	����飺{}�ָ�ʹ����ṹ����
	{
		����
		...
	}
    ���ʽ:�����ǵ����������߸�����ϣ�����ʽ��Ψһ,��a,a+1��(x+u),y=3,6,....
*/

int main() {
	{
		int testif = 40;
		if (testif >= 0 && testif <= 18)
			printf("����\n");
		else if (testif <= 26)//��ǰ��if�������������(��testif>18)�Ż�����ж�,���Կ���ʡ��testif>18
			printf("����\n");
		else if (testif <= 40)//ͬ��
			printf("����\n");
		else
			printf("����\n");
	}
	//tip:�����û�л��ִ����νṹ������£�else���������ifƥ��
	/*
		if(xxx)			���ʽxxx��ֵΪ��ִ��...
			if(xxx)		���
			...
			else		���
			...
	tipд���Ƽ�:
	��дif��������ж�ʱ����дΪ���磺5==x������д��,����д�ɸ�ֵ�ı��ʽ(����x=5������ʽΪ����)
	switch(���ʽ)
	{						�����
		�����1		      
		�����2
		...
	}
	*/
	{
		int testif2;
		for (testif2 = 1; testif2 <= 100; testif2++) {
			if (testif2 % 2 != 0)
				printf("%d������\n",testif2);
		}

		{	
			//С��:case�����ṹ���,break�����ṹ����
			char testswitch = 'T';
			switch (testswitch) {			//��Ҫ����ƥ��ı��ʽ(ֵ)--->��һ�����γ������ʽ
			case 'M':printf("����������һ\n"); break;//�����		����֪ʶ:�ַ��䱾������ASCLL��(ʮ��������)����ʽ�洢�ڼ�����У�����Ҳ�ǳ���
			case 'T':printf("���������ڶ�\n"); break;//case���ʽ,��case���ʽ��ƥ����Ӵ�����ʼִ�����(ע:���������)-->���һ�������break����ʡ��(����ִ����ͽ�����)
			case 'W':printf("������������\n"); break;//break����������ǰѭ��/�ṹ���������ִ����������д���--����switch��break�ǰ󶨵�
			case 5/2:printf("������������\n"); break;//�˴���������Ҫ������¿��Ի�д(��һ��ȫ��һ�����͵�ֵ,Ҳ��һ���ǵ���ֵ)
			case 'F':printf("������������\n"); break;
			default:printf("��������ĩ\n");			//��������������������Ĭ��ִ���������(����ʡ��,������������Ϊ�˿�������ȫ���д)
			}										//
			int testswitch2 = 6;
			switch (testswitch2/2){			//���ʽ(ֵ)
			case 1:
				printf("Yes\n");			//д����Ψһ,�����÷�ΧΪcase��case֮��(���Բ���Ҫ��������)
				break;
			case 2:
				printf("No\n");
				break;
			default:
				testswitch2 = 666;
				printf("%d\n", testswitch2); 
				break;
			}
			//case������ʡ��д��-->ʡ�Բ�д���Ĭ������һ���������ͬ
			int day = 8;
			int day2 = 3;
			switch (day) {
			case 1:								//1ʡ������2��ͬ
			case 2:								//2ʡ������3��ͬ
			case 3:								//3ʡ������4��ͬ
			case 4:								//4ʡ������5��ͬ	--������ʡ��д��
			case 5:printf("������\n"); break;	
			case 6:								//6ʡ������7��ͬ
			case 7:printf("��Ϣ��\n"); break;
			case 8:								//switch��Ƕ��
				switch(day2){
					case 3:printf("switchǶ�ײ��ԣ�\n");break;			//�����ڲ�ṹ				
					default:printf("nothing\n"); break;
				}
				break;													//�������ṹ
			default:printf("error!\n"); break;
			}

		}
	









	}




	return 0;
}
