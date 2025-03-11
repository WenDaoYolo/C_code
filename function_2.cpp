#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
/*
	函数是什么?

	数学中的函数:f(x)=x+3
	给定不同的x得出不同的函数值

	程序中的函数，又称为子程序,是一整个大程序中的一小部分代码，由若干语句组成用来完成某一特定
	任务从而形成一个单独的模块,相较于其他代码较为独立

	函数一般有输入参数和输出,提供对过程的封装和隐藏(比如写好了一个函数用来完成某一功能，
	以后就不需要再去在意这个函数内部的执行过程，只需要调用这个函数即可)
	特别是对于需要大量重复使用的代码，可以封装为函数，然后调用函数即可减少大量冗杂


	函数是程序的基本组成单位——将代码语句整合成各个不同模块的函数然后去互相调用

	程序中函数分为<库函数>和<自定义函数>

	库函数，是c语言已经写好的一系列函数函数模块，方便开发者的编码，根据不同的功能进行了不同函数库
	的分类,每个函数库都有各自的头文件,若要使用这些函数库中的函数模块，则需要预先调用或连接这个函数库
	#include<头文件>			在编译程序之前连接到xxx函数库
	头文件格式:库名.h

	库函数一览：
	https://cplusplus.com/reference/
	msdn(最新版)	中文版
	https://en.cppreference.com/w/
	
	库函数的大致分类:
	IO(输入输出)函数
	字符操作函数
	字符串操作函数
	日期/时间函数
	数学函数
	其他函数	例如编译器外的第三方库，如图形库...

	参照文档学习库函数
	英语很重要，至少能读懂英文文献(例如文档)

	字符串拷贝函数		将字符串2拷贝给字符串1
	strcpy(字符串1,字符串2)

	memory	记忆	内存
	memset	内存设置函数
	memset(指针,y值,n)	将指针对象前n个字节的内存空间设(赋值)为y值

	size_t typedef定义的复合类型	无符号整型
	区分基本数据类型和复合类型

*/

//字符数组是目前存储字符串最好的方式,注意\0结束符的事项
int main() {
	char arry1[20]= {0};
	char arry2[] = "hello world!";
	strcpy(arry1,arry2);
	strcpy(arry2, "Hello test\n");
	printf("%s\n",arry1);
	printf("%s\n", arry2);	//数组名就代表这个数组的地址,表示整个数组
	memset(arry2,'A',5);
	printf("%s\n", arry2);
	return 0;
}