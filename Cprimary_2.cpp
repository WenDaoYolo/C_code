#define _crt_secure_no_warnings 1
#include<stdio.h>
#include<string.h>

/*
		��ϰ2:����ϰ1һ��,Ҫ����洢�����

		������ת��
		1.���巭ת
		2.ÿ�����ʷ�ת
		����:I like beijing
		ginjieb ekil I
		beijing like I
		˼ά:�����ַ���������,������ɺ����ֶԸ������ʵ���������

		��ַ���ַ֮��������Ƚ�(>,<,==),ǰ����������ַ����ͬһ�������Ŀռ�
		�ȽϵĹ����Ǹߵ�ַ>�͵�ַ

*/


//ʵ���ַ���������
void reverse(char* left,char* right) {
	int temp = 0;
	while (left<right) {					
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}


int main() {
	char arr1[100];							//�����ַ�ӵ͵�����������	
	fgets(arr1, sizeof(arr1), stdin);		//fgets����--�ݲ������˽�	mark				
	arr1[strcspn(arr1, "\n")] = 0;
	int num=strlen(arr1);
	reverse(arr1,arr1+num-1);

	//�ҵ�ÿ������,��ÿ�����ʽ�������
	char* start = arr1; char* end = arr1;
	while (*start != '\0') {
		end = start;
		while (*end != ' ' && *end != '\0') {
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}

	printf("\n%s\n", arr1);
	return 0;
}