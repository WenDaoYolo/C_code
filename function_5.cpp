#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*

function��ϰ2
��д���º���������书��

1.��һ������������ж��ֲ���
2.дһ��������ÿ�ε������������num�ͻ�+1


*/

//1.
void sort(int *arry1,int num){					//ð������		sort(�����ַ,���鳤��)
	for (int i = 1; i < num; i++)
		for (int j = 0; j < num - 1;j++) {
			if (arry1[j] > arry1[j + 1]) {
				int temp = arry1[j];
				arry1[j] = arry1[j+1];
				arry1[j+1] = temp;
			}
		}


}

//������Ϊʵ�δ��룬���Ķ����׵�ַ(�����β�����װ���ǵ�ַ)
//�����ٴ�ǿ��:��������׵�ַ���βζ����˻�Ϊ<ָ��>
//�ڱ��������У�sizeof(������)�ǲ��Ե�,����ǵ�ַ�Ĵ�С
//������Ҫ�õ�����Ԫ�صĸ���,�ô����������ٵ�����Ϊʵ�δ���ȥ

//1.
int arryfind(int arry1[],int num,int longa) {		//���ֲ���	arryfind(����,Ŀ����,���鳤��)
		int left = 0, right = longa - 1,mid;		//�ҵ�����1��δ�ҵ�����0
		while (left<=right){
			mid = (left + right) / 2;
			if (arry1[mid] < num)
				left = mid + 1;
			else if (arry1[mid] > num)
				right = mid - 1;
			else
				break;
		}

		if (arry1[mid] == num)
			return 1;
		else
			return 0;												
}





//2.
int none(){
	int static num=0;
	num++;
	return num;
}




int main() {
	int arry1[10],value;
	printf("������10����:\n");
	for(int i=0;i<10;i++)
	scanf("%d",&arry1[i]);

	printf("����ǰ:\n");
	for (int i = 0; i < 10; i++)
	printf("%d ",arry1[i]);

	sort(arry1,sizeof(arry1)/sizeof(int));			

	printf("\n�����:\n");
	for (int i = 0; i < 10; i++)
	printf("%d ", arry1[i]);
	printf("\n������Ҫ���ҵ���:");
	scanf("%d",&value);

	
	
	if (arryfind(arry1, value, sizeof(arry1) / sizeof(int)))	
		printf("�ҵ���\n");
	else
		printf("û�ҵ�\n");


	printf("\nnum:%d\n",none());

	return 0;
}