#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ð������
void Sort(int arr[],int num) {
	int i = 0, j = 0;
	for (i = 0; i < num-1;i++) {
		for (j = 0; j < num - 1 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				}
		}
	}


}
 //��ӡ����
void PrintArr(int arr[],int num) {
	int i = 0;
	while (i < num) {
		printf("%d ",arr[i]);
		i++;
	}
	putchar('\n');
}

//��ʼ������Ϊ0
void ReArr(int arr[],int num) {
	int i = 0;
	while (i < num) {
		arr[i] = 0;
		i++;
	}
}

//����1
void Reverse(int arr[],int num) {
	int left = 0, right = num - 1;
	while (left < right) {
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

//����2				�ݹ�˼ά
void Reverse2(int* lp,int* rp) {
	if ((lp != rp) && (lp + 1 != rp)) {
		Reverse2(lp + 1, rp - 1);
	}

	{
		int temp = *lp;
		*lp = *rp;
		*rp = temp;
	}
	
}

//������������	->����һ����
void SwapArr(int arr1[],int arr2[],int num) {
	int i = 0;
	while (i < num) {
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
		i++;
	}
}

	//�������ǳ���,�ǲ����޸ĵ���ֵ!!

int main() {
	int arr[] = { 1,2,3,6,6,12,91,44,1002,11 };
	int arr2[] = { 2,3,4,5,6,7 };
	int arr3[] = { 1,2,3,4,5,5,3,8,9,10 };
	int arr4[] = { 1,2,2,2,4,5,6,7 };
	int test1[] = { 1,2,3,4,5 };
	int test2[] = { 6,7,8,9,10 };
	int num = sizeof(arr) / sizeof(int);
	int num2 = sizeof(arr2) / sizeof(int);
	int num3= sizeof(arr3) / sizeof(int);
	int num4 = sizeof(arr4) / sizeof(int);
	printf("����ǰ:");
	PrintArr(arr, num);
	Sort(arr, num);
	printf("�����:");
	PrintArr(arr, num);
	putchar('\n');
	printf("��ʼǰ:");
	PrintArr(arr2, num2);
	printf("��ʼ��:");
	ReArr(arr2,num2);
	PrintArr(arr2,num2);
	printf("����ǰ:");
	PrintArr(arr3,num3);
	Reverse(arr3,num3);
	printf("�����:");
	PrintArr(arr3, num3);
	printf("����ǰ:");
	PrintArr(arr4, num4);
	printf("�����:");
	Reverse2(arr4, &arr4[num4 - 1]);
	PrintArr(arr4, num4);

	printf("����ǰ:\n");
	PrintArr(test1,sizeof(test1)/sizeof(int));
	PrintArr(test2,sizeof(test2) / sizeof(int));
	SwapArr(test1,test2, sizeof(test1) / sizeof(int));
	printf("������:\n");
	PrintArr(test1, sizeof(test1) / sizeof(int));
	PrintArr(test2, sizeof(test2) / sizeof(int));
	return 0;
}