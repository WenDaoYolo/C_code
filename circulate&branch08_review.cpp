#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
/*
	f10����̵���		��>ֻչʾ�������еĹ���
	f11��������		��>չʾ��������Ĺ��̣�����������������
*/
void test1() {
	int i = 0;
	while (i<10) {
		printf("%d\n",i);
		i++;
	}
}


int main() {

	test1();

	int arry[] = { 9,2,4,7,5,1,3,3,5,1,77 },temp=0;
	printf("����ǰ:");
	for (int k = 0; k < sizeof(arry) / sizeof(int); k++)
		printf("%d ",arry[k]);


	for(int i=0;i<(sizeof(arry)/sizeof(int))-1;i++)				//ð�������С
		for (int j = 0; j < (sizeof(arry) / sizeof(int)) - 1; j++) {
			if (arry[j] < arry[j + 1]) {
				temp = arry[j];
				arry[j] = arry[j + 1];
				arry[j + 1] = temp;
			}
		}


	printf("\n�����:");
	for (int k = 0; k < sizeof(arry) / sizeof(int); k++)
		printf("%d ", arry[k]);



	for (int m = 3; m <= 100; m += 3)			//��ӡ���ı���
			printf("\n%d",m);

	//��ӡ�����������Լ��				���Լ��:��������ͬ���������
	//1.��ٷ�
	int num1, num2,value,min;
	printf("��������������:");
	scanf("%d%d", &num1, &num2);
		min = num1;
	if (num1 > num2)
		min = num2;
	for (int p = min; p >= 1; p--) {
		if ((num1 % p == 0) && (num2 % p == 0)) {
			value = p;
			break;
		}	
	}
	printf("���Լ���ǣ�%d\n",value);
	//2.շת�����(ŷ������㷨)		ԭ��:��ѧ����,�ݹ����������С�����ģ
	/*
		��ʼ:�ϴ�������С��������Ϊ0���Ϊ��С��,������Ϊ0����
		����:��һ�ֽ�С����������������һ�ֵ����������ϴ�������С��������Ϊ0���Ϊ��С��,��Ϊ0����


		tip:��ʼ���ֲ��������������Ĵ�С���⣬��Ϊ����һ�ε������������ͻ����Ϊ��ȷ˳��
		����:c=18;b=24;t=18%24��>t=18
		����:c=24;b=18;t=24%18��>t=6
		...
	*/
	int c, b, y;
	printf("��������������:");
	scanf("%d%d", &c, &b);
	if (c<b) {
		int temp = c;
		c = b;
		b = temp;
	}
	do {
		y = c % b;
		if (y != 0) {
			c = b;
			b = y;
		}
	} while (y != 0);
		printf("���Լ����:%d",b);
	//������������С������		18 24
	//����1:��ٷ�
		int q, w,e;
		printf("\n��������������:");
		scanf("%d%d", &q, &w);
		if (q > w)
			e = q;
		else
			e = w;
		while (1) {
			if (e % q == 0 && e % w == 0)
				break;
			e++;
		}
		printf("\n����������С������:%d\n",e);

		//����2:��ʽ��
		//��С������=m*n/���Լ��
		int x = (num1 * num2) / value;
		printf("num1��num2����С��������:%d\n",x);

		//�ܽἼ��:���Լ������С,��С���������ϴ�
		//ѧ���һ����


	/*
	��ӡ1000-2000֮�������		1.�ܱ�400����	2.�ܱ�4���������ܱ�100����
	*/
		int count = 0;
		for (int year = 1000; year <= 2000; year++) {
			if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
				printf("%d��������\n", year);
				count++;
			}
				
		}
		printf("һ����%d������\n",count);
	/*
	��ӡ100-200֮�������		������ֻ�ܱ�1���Լ�����
	*/
	//1.
		int su = 100;
		while (su <= 200) {
			int flag = 1;
			for (int temp = 2; temp < su; temp++) {
				if (su % temp == 0) {
					flag = 0;
					break;
				}
			}
			if (flag)
				printf("%d ",su);
				su++;
		}
		putchar('\n');
		//2.

		int su2 = 100,temp2;
		while (su2 <= 200) {
			for (temp2 = 2; temp2 < su2; temp2++) {
				if (su2 % temp2 == 0) {
					break;
				}
			}

			if (temp2==su2)
				printf("%d ", su2);
			su2++;
		}
		//3.�Ż�	��ѧ˼·
		/*
			su2��������������������ʽ�ֽ⣬д��a*b����ʽ,su2=a*b;
			��ôa��b��������һ����<=su2��ƽ�����ģ�����16=2*8=4*4��

			����ֻҪ�жϳ���
			su2�ܱ���С��һ��������,��ôsu2�Ͳ�������,��һ����Ӧ�����ӾͲ�����ȥ���г����ж���
			���������ʽ�ֽ��н�С���Ǹ��������ܱ�su2��������ôʣ�µ���Щ��Ӧ������Ҳһ�����ܱ�su2����

			����С���Ǹ���һ����<=sqrt(su2)��
			����ֻ��Ҫ�жϴ�2��su2��ƽ����֮���������

			sqrt()��������ƽ������		ͷ�ļ�:matn.h

		��һ���Ż�		��ѧ˼·2
		��Ϊ����2���⣬���е�ż��һ����������
		���Կ����Ȱѳ�2�������ż���ų���������2��������ȥ�ж�����


		*/
		putchar('\n');

		int su3 = 101, temp3;			//�ų�2�����ż��
		while (su3 <= 200) {
			for (temp3 = 2; temp3 <= sqrt(su3); temp3++) {
				if (su3 % temp3 == 0) {
					break;
				}
			}

			if (temp3 > sqrt(su3))
				printf("%d ", su3);
			su3+=2;						//�ų�2�����ż��
		}
		
		putchar('\n');







		return 0;
	
}