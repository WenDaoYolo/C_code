#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
/*
		��Ŀʵ������������Ϸ
		1.�����һ��1��100������
		2.�����֣��¶Խ���������Ϸ���´����ʾ�´���С��Ȼ�������ֱ���Ŷ�Ϊֹ
		3.��Ϸ����һֱ���У�ֱ���˳�����Ϊֹ
*/
void menu(){
	printf("*---------------------------------------------*\n");
	printf("|MENU:            1.play                      |\n");
	printf("|                 2.exit                      |\n");
	printf("*---------------------------------------------*\n");
}

void menu2(int value1,int value2) {
	printf("*---------------------------------------------*\n");
	printf("|RESULT:          ���ֲ²����:%d              |\n",value1);
	printf("|                 ��ʷ���ٴ���:%d              |\n",value2);
	printf("*---------------------------------------------*\n");
}

void game() {
	int num,result,count=0;
	static int his_count=100;
	result = (rand()%100)+1;
	while (1){
		printf("������:");
		scanf("%d", &num);
		if (num<=100&&num>=1){
			if (num > result)
			{
				printf("�´���!\n");
				count++;
			}
			else if (num < result)
			{
				printf("��С��!\n");
				count++;
			}
			else {
				count++;
				printf("\a��ϲ�¶���!\n");
				Sleep(2000);
				system("cls");
				break;
			}
		}
		else
			printf("error!\n");
		}
	if (count < his_count)
		his_count = count;
	menu2(count,his_count);
	}

void judge(){
	int choose, flag = 1;
	do {
		menu();
		scanf("%d", &choose);
		switch (choose) {
		case 1:
			printf("��1��100������ ");
			game();
			break;
		case 2:
			flag = 0;
			break;
		default:
			printf("�������!\n");
			break;
		}

	} while (flag);
}

int main() {
	srand((unsigned int)time(NULL));
	judge();
	printf("�������˳�!\n");
	return 0;
}




