#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编程练习,求1-100之间出现了几个数字9
//递归法.
int F(int j) {
	if (j) {
		if (j % 10 == 9)
			return 1;
		return F(j / 10);
	}
	else
		return 0;

}

int main() {
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		if (F(i)) {
			if (i / 10 == 9 && i % 10 == 9)//99是两个9,递归思维一位一位的去判断会漏掉，所以要在这里手动判断和补充
				count++;
			printf("%d ",i);
			count++;
		}
	}
	printf("\n1-100之间出现了%d个数字9\n",count);
	
	//可以判断出递归法不适合此问题

	//迭代法.
	int count2 = 0;
	for (int j = 1; j <= 100; j++) {
		if (j % 10 == 9) {		//统计个位的9
			count2++;
		}						
								//注意只要出现9就得单独++，所以不能形成分支，要单独去判断
		if (j % 10 == 9) {		//统计十位的9
			count2++;
		}
	}
	printf("\n1-100之间出现了%d个数字9\n", count2);


	/*
	求1-1/2+1/3-1/4+1/5...-1/99+1/100的值
	*/
	//迭代法
	//分析，奇数为正，偶数为负
	float sum = 0;
	int flag = 0;
	for (int a = 1; a <= 100; a++) {
		if (a % 2 == 0)				//模运算是操作的是整数，整数之间才能模
			flag = -1;
		else
			flag = 1;				//或者通过正负交替的规律，初始flag=1，然后运算完一个数后直接
									//改变符号：flag=-flag	1,-1,--1,---1,----1,....
		sum += (1.0 / a)*flag;		//整数除法(两边都是整数),得到的结果是整数
	}							    //所以需要一边不为0		
	printf("最终结果是:%lf",sum);	//单精度小数的输出格式%lf

	printf("\n\n\n\n");
	//求10个整数中的最大数
	int arry[] = { 1,2,3,4,5,677,12,5122,1,10 },max=arry[0];
	for (int i = 1; i < 10; i++) {
		if (max < arry[i])
			max = arry[i];
	}
	printf("\n10个数中的最大数为:%d\n",max);
	printf("\n\n\n\n");

	//打印九九乘法表	
	/*
	迭代法.
	分析:
	i->控制行数
	j->控制每行的列数
	*/
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++)
			printf("%dx%d=%-2d ", j, i,j*i);			//输出格式%xd,输出结果占x位，不够补空格
		printf("\n");								//默认右对齐,%-d,左对齐
	}
	//函数设计应该追求高内聚低耦合的理念
	//高内聚,模块函数内部的功能与功能之间应该联系紧密，能够很好地完成某一项功能
	//低耦合,模块与模块之间要联系小,尽可能相互独立

	/*
		代码块及其作用域
		函数的局部范围判定，其原理是靠结构符{}来判断的，所以单独的代码块也能构成一个局部范围
		这个代码块以及其中的语句可以看作一个整体，所以也称为一个复合语句
		局部变量定义在函数内部的复合语句中时，则作用域为这个复合语句(代码块)，例如
		void(){
			{
				int a=10;		//则a只在内部的代码块中生效
			}
			a=11;				//无法识别符号a
		}
	*/









	return 0;
}