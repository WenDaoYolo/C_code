#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//�ж�����
void loopyear(int year) {
	if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
		printf("%d��������",year);
	else
		printf("%d�겻������",year);
}	

//��ӡ1-100֮������ ����
//����Գ���
void su1(){
	int i, j;
	for (i = 2; i <= 100; i++) {
		for (j = 2; j < i; j++)
			if (i % j == 0)
				break;
		if (j == i)
			printf("%d ", i);
	}	
}
//�����Գ���
void su2() {
	int i, j;
	printf("%d ", 2);						//2�������������
	for (i = 3; i <= 100; i+=2) {			//�Ż���ż����2����������������
		for (j = 2; j <=sqrt(i); j++)
			if (i % j == 0)
				break;
		if (j>sqrt(i))
			printf("%d ", i);
	}
}

//������������
void SWAP(int* a, int* b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}

//�ݹ�ͷǵݹ�ʵ�ִ�ӡʵ�ִ�ӡһ������ÿһλ
//�ݹ�
void print(int n) {
	if (n > 9)
		print(n/10);

		printf("%d ",n%10);
}
//����
void print2(int n) {
	while (n != 0) {
		printf("%d ", n % 10);			//�޷�ֱ���������(�Ӹ�λ����λ)
		n /= 10;
	}
}

//�ݹ�ͷǵݹ���n�Ľײ�		���������

//����
int function1(int n) {
	int res = 1,i=1;
	if (n == 0)
		return 1;
	while (i <= n) {
		res *= i;
		i++;
	}
	return res;
}
//�ݹ�
int function2(int n) {
	if (n == 0)			//0�Ľײ���1
		return 1;
	else if (n > 1)
		return n * function2(n - 1);
	else
		return 1;
}

//�ݹ�ͷǵݹ����n��쳲�������
//����
int Fib(int a) {

	if (a == 1)
		return 0;
	else if (a == 2)
		return 1;

	int x = 0, y = 1, z = x + y;
	while ((a-2)>=1) {
			z = x + y;
			x = y;
			y = z;
			a--;
	}
	return z;
}
//�ݹ�
int Fib2(int a) {
	if (a == 1)
		return 0;
	else if (a == 1)
		return 1;
	else if (a > 2)
		return Fib2(a-1)+Fib2(a - 2);
}

//�ݹ�ͷǵݹ�ģ��ʵ��strlen��������,������ʹ�ò����ַ�������غ���
//����
int my_strlen1(char* arr) {
	int count = 0;
	while (*arr != '\0') {
		count++;
		arr++;
	}
	return  count;
}
//�ݹ�
int my_strlen2(char* arr){
	if (*arr != '\0')
		return 1 + my_strlen2(arr + 1);
	else
		return 0;
}






int main() {
	int year = 0;
	printf("���������:");
	scanf("%d",&year);
	loopyear(year);
	putchar('\n');
	su1();
	putchar('\n');
	su2();
	putchar('\n');
	printf("��������������:");
	int a=0, b=0;
	scanf("%d%d",&a,&b);
	SWAP(&a, &b);
	printf("������:a=%d,b=%d",a,b);
	putchar('\n');
	printf("������һ������:");
	int test = 0;
	scanf("%d",&test);
	print(test);
	putchar('\n');
	printf("������һ������:");
	int test2 = 0;
	scanf("%d", &test2);
	print2(test2);
	printf("������Ҫ��ײ����:\n");
	int test3 = 0;
	scanf("%d",&test3);
	int res1 = function1(test3);
	printf("%d�Ľײ���%d\n",test3,res1);
	printf("������Ҫ��ײ����:\n");
	int test4 = 0;
	scanf("%d", &test4);
	int res2 = function2(test4);
	printf("%d�Ľײ���%d\n", test4, res2);
	putchar('\n');
	printf("������Ҫ���쳲�����������");
	int aaa = 0;
	scanf("%d",&aaa);
	printf("%d",Fib(aaa));
	putchar('\n');
	printf("������Ҫ���쳲�����������");
	int bbb = 0;
	scanf("%d", &bbb);
	printf("%d", Fib2(bbb));
	char arr1[] = "string";
	char arr2[] = "hello string";
	printf("\nstring�ĳ�����%d\n",my_strlen1(arr1));
	printf("hello string�ĳ�����%d", my_strlen2(arr2));
	return 0;
}






























