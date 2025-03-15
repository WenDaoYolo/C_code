#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
	递归与迭代思维

	编程中递归和迭代是两种不同的编程思维,但他们都有循环的操作
	递归中的循环是指：不断循环重复调用自己
	而迭代中的循环是指：通过循环结构不断更新迭代变量参数,所以循环是迭代的一种方式

	注意：
		迭代是指：在原始问题不变的基础上更新迭代其中的值				    例如:for(int i=0;i<=100;a++)	    原始问题始终是i
		而递归中问题规模的变换，改变了原始问题,所以不能说是一种递归行为		例如F(3)=3*F(2)	                    原始问题发生了改变




函数:strlen(字符串)	求字符串内容的长度('\0'是结束符占空间，但不算内容,)
实现原理:遍历并计数,遇见'\0'结束并返回

模拟实现strlen函数
*/
int my_strlen(char* str) {
	int count=0;				//临时局部变量
	while (*str != '\0') {
			count++;
			str++;
	}
	return count;
}

//模拟实现strlen函数,不允许创建临时变量
/*

	递归思维:
	分析:
	通过判断第一个元素是否为'\0',
	若不是,则表明字符串的长度至少为1,继续判断下一个元素(提示:地址+1即可)
	若不为则字符串的长度至少为1+1,...
	如此往复(每次都拆分下来一个小事件,重复拆分将整个大问题层层拆分成这些小问题或者事件)

	可以得出：元素!='\0'就是限制条件,参数指针变量的指向就是参与条件判断的量,
	常数1则是最简单最小的事件,所以是需要重复调用不断的拆分为1+1+1+1...便可求出长度
	注意:
	字符型，只占一个字节的单位，即一个内存单元，所以数组中元素与元素之间的<地址跨度>为1
	若是其他类型，例如整数型，则占4个连续的地址空间，所以此时元素与元素之间的地址跨度为4
	

	画图很重要,通过画图能更好理解递归过程

	my_strlen("[b]it")	   str				[]表示指针的指向
	b!='\0'
	1+my_strlen("b[i]t")	   str+1	
	i!='\0'
	1+1+mystrlen("bi[t]")	   (str+1)+1
	t!='\0'
	1+1+1+my_strlen("bit[\0]")	   ((str+1)+1)+1——>隐藏的结束符'\0'
	1+1+1+0;

*/
int my_strlen_2(char* str) {			 //使用地址法则可以避免临时变量的创建
	if (*str != '\0')
		return 1 + my_strlen_2(str + 1);//每次重复调用，都将当前地址的下一个地址传入函数		
										//达到限制后就不会再走if语句去调用函数,开始执行回溯
	else
		return 0;					    //对于函数的规范性,当判断到'\0'则不会走上面的if语句，但必须有一个返回值

										//没有return值，编译器会进行无法预测的行为
										//有时会报错无法通过编译，有时可以编译并且不影响结果
										//所以一定要考虑函数的规范性
										
	//对于这个函数而言写++str作为参数传进去也是可以的，因为str的变化不会影响返回值，但对于其他情况要慎重考虑，
	//因为++，--等方式会改变原始变量的值，所以最好不要使用这种修改原始变量值的方法
}   


int F(int num) {
	if (num !=0)
		return num*F(num - 1);
	else if (num==0)
		return 1;
}


int main() {
	char arry1[] = "test101";
	char arry2[] = "abcde";
	int r1 = my_strlen(arry1);
	int r2 = my_strlen_2(arry2);
	printf("1:%d\n",r1);
	printf("2:%d\n",r2);
	putchar('\n');
	


	//n的阶层	递归思维		
	/*
	分析过程:F(0)=1
	4!=4*F(3)
	  =4*(3*F(2))
	  =4*3*(2*F(1))
	  =4*3*2*(1*F(0))	
	  =24	
	由此可以判断出最小最简单事件就是参与条件判断的参数(已经就是一个直接的数值结果了,不需要再进行拆分求解了)
	因此只需要不断调用拆分迭代成为n*(n-1)*（n-1-1)*....*F(0)的形式即可
	限制条件则为F(0),即n!=0,参与条件判断的量为n

	注意：这里的F(0)是作为限制条件不是最小事件
	由此递归可以看出，循环调用拆分出来的小事件并不相同，但是相似(都是常数，是可以直接运算的结果)

	*/
	 int n = 4;
	printf("4的阶层:%d\n",F(n));

	
	//n的阶层	 迭代思维

	int n1 = 4,res=1;
	for (int i = 1; i <= 4; i++)
		res = res * i;
	printf("4的阶层:%d\n", res);
	

	
	//递归的算法，代码少，书写轻量，但效率非常低，每次都要重复调用函数并计算一些重复的值，并且还不会立马销毁，这样会占用大量时间和空间
	//迭代的算法：效率高占用空间相对较小，但代码量相对更多



	//所以递归和迭代各有好处，具体运用得结合具体问题的数据结构和规模


	return 0;
}