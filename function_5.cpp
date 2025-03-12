#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*

function练习2
编写如下函数并完成其功能

1.对一个整型数组进行二分查找
2.写一个函数，每次调用这个函数，num就会+1


*/

//1.
void sort(int *arry1,int num){					//冒泡排序		sort(数组地址,数组长度)
	for (int i = 1; i < num; i++)
		for (int j = 0; j < num - 1;j++) {
			if (arry1[j] > arry1[j + 1]) {
				int temp = arry1[j];
				arry1[j] = arry1[j+1];
				arry1[j+1] = temp;
			}
		}


}

//数组作为实参传入，传的都是首地址(所以形参里面装的是地址)
//所以再次强调:接收这个首地址的形参都会退化为<指针>
//在被调函数中，sizeof(数组名)是不对的,求的是地址的大小
//所以想要得到数组元素的个数,得从外面计算好再单独作为实参传进去

//1.
int arryfind(int arry1[],int num,int longa) {		//二分查找	arryfind(数组,目标数,数组长度)
		int left = 0, right = longa - 1,mid;		//找到返回1，未找到返回0
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
	printf("请输入10个数:\n");
	for(int i=0;i<10;i++)
	scanf("%d",&arry1[i]);

	printf("排序前:\n");
	for (int i = 0; i < 10; i++)
	printf("%d ",arry1[i]);

	sort(arry1,sizeof(arry1)/sizeof(int));			

	printf("\n排序后:\n");
	for (int i = 0; i < 10; i++)
	printf("%d ", arry1[i]);
	printf("\n请输入要查找的数:");
	scanf("%d",&value);

	
	
	if (arryfind(arry1, value, sizeof(arry1) / sizeof(int)))	
		printf("找到了\n");
	else
		printf("没找到\n");


	printf("\nnum:%d\n",none());

	return 0;
}