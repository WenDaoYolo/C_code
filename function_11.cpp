#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�ݹ�ͷǵݹ�ʵ�ּ���һ����ÿλ����֮��

int ReturnValue(int xt) {				//�ݹ�
	if (xt > 9)
		return xt % 10 + ReturnValue(xt / 10);
	else
		return xt;
}

int ReturnVlue1(int xt1) {				//����
	int sum = 0;
	while (xt1) {
		sum += xt1 % 10;
		xt1 /= 10;
	}
	return sum;
}

//�ݹ�ͷǵݹ�ʵ��n��k�η���ֵ		


//�ݹ�
float ReturnValue2(int n,int k) {			//����k
	if (k >=1)
		return n * ReturnValue2(n, k - 1);
	else if(k==0)
		return 1;
	else if(k<0)
		return (1.0/n) * ReturnValue2(n, k +1);	//����1.0/ ReturnValue2(n, -k),--�������������return��Ȼ��������������������return�ٱ�1.0������󷵸�������
}

int ReturnValue3(int n, int k) {			//����k
	if (k >= 1)
		return n * ReturnValue2(n, k - 1);
	else if (k == 0)
		return 1;
}
//����
int ReturnValue4(int x,int y) {						//����k,������
	int res = 1;
	for (int i = 1; i <= y; i++) {
		res *= x;
	}
	return res;
}									





int main() {


	int n = 667766;
	int x=ReturnValue(n);
	printf("%d\n",x);

	int n1 = 123666111;
	int x1 = ReturnVlue1(n1);
	printf("%d\n", x1);

	putchar('\n');
	int n2 = 0, k = 0,n3=0,k2=0;
	printf("������n2,k;n3��k2:");
	scanf("%d%d%d%d",&n2,&k,&n3,&k2);
	float value2 = ReturnValue2(n2,k);
	printf("\n%d��%d�η���%f\n",n2,k,value2);
	int value3 = ReturnValue3(n3, k2);
	printf("\n%d��%d�η���%d\n", n3, k2, value3);
	int t = 0, y = 0;
	printf("������t,y:");
	scanf("%d%d", &t,&y);
	int value4 = ReturnValue4(t,y);
	printf("\n%d��%d�η���%d\n", t, y, value4);
	return 0;
}