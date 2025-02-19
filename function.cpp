#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>	//标准函数库,包含大多常见的函数
#include<string.h>	//字符串相关函数库
float add(float a, float b){//自定义加法计算函数
	float sum = a + b;
	return sum;
}
int main() {
	//函数，是一组方法过程，分为系统函数和自定义函数
	//系统函数是系统已经写好函数，具有各种功能
	// 不同类型的函数存在于不同的函数库中(需要引用对用的函数库头文件)
	//用户自定义函数,用户自己定义的一组方法函数,其命名规则与自定义变量，常量一致
	//用户自定义函数需要在主函数外定义并声名后系统才能识别
	/*
	函数格式：
		函数类型 函数名(参数类型 参数...){
			函数体;
			return ...;
		}
	*/
	float num1, num2;
	printf("请输入两个加数，用,分隔：\n");
	scanf("%f,%f",&num1,&num2);
	printf("结果是:%f", add(num1, num2));//传参并调用add自定义加法函数
	//自定义函数的优势:写好一个功能后方便以后可以反复调用。而非重复写代码
	//所以为了维护方便，每个函数(又或者称为模块)的功能尽量简单单一


	return 0;
}