#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
/*
	编写代码，模拟用户登录情景，密码输入错误三次退出程序，输入正确则提示登录成功
	判断字符串是否相等不能用算术符号==  —>用==则比较的是两个字符串的首地址  —>比较地址毫无意义
	strcmp(字符串1,字符串2)函数,用来比较两个字符串<是否不同>,并返回一个值			头文件:string
	比较规则：
	对两个字符串自左至右逐个字符相比（按ASCII码值大小比较），
	直到出现不同的字符或遇到‘\0’为止。如果全部字符相同，则认为相等；
	若出现不相同的字符，则以<第一个>不相同的字符的比较结果为准。

	ASCLL码值大小:
	即:数字<字母,小写>大写,后面>前面,其他字符见ASCLL表

	返回值:
	字符串1=字符串2:0				//理解比较规则,以判断不同为主，若不同则返回真，否则返回相应的值
	字符串1>字符串2:正整数
	字符串1<字符串2:负整数

	*/
int main() {
	//假设登录密码为:3547474131
	char password[11];				//注意字符数组长度的定义
	for (int i = 1; i <= 3; i++) {
		printf("请输入密码:");
		scanf("%s", password);		//注意字符串会默认添加'\0'来结尾，不算数组的数据内容，但也会占用一字节空间
		if (strcmp(password, "3547474131") == 0) {	//所以其长度(即结构长度)应该为有效长度+1(留一位给\0，防止空间溢出)—>尽量赋大一点就不需要考虑内存溢出的问题
			printf("登录成功!\n");
			break;
		}
		printf("密码输入错误!\n");
		if (i == 3) {
			printf("已输错三次密码,退出程序!\n");
		}

	}
	return 0;
}