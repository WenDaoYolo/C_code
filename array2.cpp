#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>	

int main() {
	//单个数组名代表数组的首地址，即数组的<地址>，是一个整型常量的<地址>(空间编址没有负数，且因为数组地址连续不能改变-->改变后这块连续空间的地址就会失效)
	//访问数组的单个元素通过下标访问,默认下标从0开始
	/*
	格式:
	类型 数组名[长度]——长度分为结构长度和有效长度；结构长度即数组本身定义的大小,有效长度即数据长度，即结构长度中非空元素的长度
	定义时省略长度，则系统会自动更具赋值数为数组定义长度
	长度(结构长度)必须为不可变的常量
	*/
	int a1[] = { 2,3,4 };//长度为3
	//字符串会默认在结尾添加一个隐藏的\0来作为结束标志,也需要占一个字节的空间，但不算作字符串内容，所以字符串占的空间为字符串长度+1
	//字符数组其本质就是字符串，所以和字符串同理
	//字符数组的两种初始化方法
	char a2[] = "string";//字符串式，字符串会默认添加\0
	char a3[] = { 'a','b'，'\0'};//单字符型，非字符串，需要手动添加结束符
				     //所以在定义字符数组的结构长度时，要考虑结束符防止内存溢出的问题
	printf("%s\n",a2);
	for (int i=0;i<=2;i++)
		printf("%d\n",a1[i]);
	/*
	数组初始化：
	1.赋值数小于长度时，剩余自动补0(整型)	不完全初始化
	2.赋值单个0，则默认全部初始化为0		完全初始化

	*/
	int test[3] = {0};
	int test2[6] = { 3,2 };




	return 0;
}
