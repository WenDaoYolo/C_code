#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int Judgment1(int m, int n) {				//�������ڸ���
	int i = 0,res=0;
	for (i = 0; i < 32; i++) {
		if (m % 2 != n % 2)
			res++;
		m /= 2;
		n /= 2;
	}
	return res;
}

int Judgment2(int m, int n) {
	int res = 0, t = 0,i=0;
	t = m ^ n;
	while (i<32) {
		t >>= i;							//��һ����������--->������0λ
		if (t % 2 == 1)
			res++;
		i++;
	}
	return res;
}






/*
	��������ϰ2

	�ȿ����������ȼ�,�����������������

	������������m��n,������32λ����ͬλ�ĸ���
	����15��14
	
	�㷨1:�򵥴ֱ�
	��m��n��ÿһ����Ӧ��λ�ó����Ƚ�


	�㷨2:�Ż�����,ѭ������,Ч�ʸ���
	1111
	1110		��1����ͬ

	˼ά:���������������,�������Ľ��,��1���ǲ�ͬ�Ĳ���,��0������ͬ�Ĳ���
	����֮ǰ�ķ�ʽȥͳ��1�ĸ���
	1111
	1110

	0001		n=n&(n-1)����&+>>����ȡģ2�ٳ�2(ֻ����������)
	...



	�����ܽ�:

	��r,ģr		�������ڸ���
	n&(n-1)
	��1,����
	���,����1
	...
	��ʽ�����޷���

*/

int main() {
	int m, n,m1,n2;
	int res = 0,res1;
	printf("������m��n:");
	scanf("%d%d",&m,&n);
	printf("������m1��n2:");
	scanf("%d%d", &m1, &n2);
	res=Judgment1(m,n);
	printf("%d��%d��%d����ͬλ\n",m,n,res);
	res1 = Judgment2(m, n);
	printf("%d��%d��%d����ͬλ\n", m1, n2, res1);

	//�ֱ��ӡ��һ������ż��λ������λ
	int temp = 0,k=0;
	printf("����������:");
	scanf("%d",&temp);
	printf("\n����:");
	for (k = 31; k >= 1; k -= 2)
		printf("%d",(temp >>k )&1);
	printf("\nż��:");
	for (k = 30; k >= 0; k -= 2)
		printf("%d", (temp >> k) & 1);

	//������������������,���ܴ�������������
	int test1 = 10, test2 = 11;
	//����1		������,��������߹�Сʱ�����
	test1 = test1 + test2;
	test2 = test1 - test2;
	test1 = test1 - test2;
	printf("\n%d-%d\n",test1,test2);
	//����2		���Ļ������Ժͽ����
	test1 = test1 ^ test2;			//test1^test2^test2->test1^0->test1
	test2 = test1 ^ test2;			//test1^test2^test1->test2^0->test2
	test1 = test1 ^ test2;
	printf("\n%d-%d\n", test1, test2);

	//ָ�����͵ķ���Ȩ��			���Operator_Relearn2.png
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;			
	int i = 0;
	for (i = 0; i < 4;i++) {
		*(p + i) = 0;
	}
	for (i = 0; i < 5; i++) {
		printf("%d ",arr[i]);
	}
	


	return 0;
}