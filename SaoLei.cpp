#define _CRT_SECURE_NO_WARNINGS 1
#include "SaoLei.h"

void Menu() {				
	printf("*************************************\n");
	printf("*** Menu:                         ***\n");
	printf("***          1.play               ***\n");
	printf("***          2.exit               ***\n");
	printf("***                               ***\n");
	printf("*************************************\n");
}

void Reboard(char arr[COLS][ROWS], char flag) {
	int i = 0,j = 0;
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
				arr[i][j] = flag;
		}
	}
}

void PrintBoard(char arr[ROWS][COLS]) {									//windows�����˽��������,�ݲ�ѧϰ
	int i = 0, j = 0;													//system("color 14")				      ����ȫ��������ɫ�ͱ�����ɫ		
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);		//������̨����ַ�����ɫ����Ϊ��ɫ
	for (int k = 0; k <= 9; k++)					//��ӡ����
		printf("%d ",k);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);		//������̨����ַ�����ɫ����Ϊ��ɫ(��ԭ)
	putchar('\n');
																		//�����Զ���дһ��ר�žֲ�����������ɫ�ĺ���,�����ظ��������Ӵ�Ĵ���
	for (i = 1; i < ROWS-1; i++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);	//������̨����ַ�����ɫ����Ϊ��ɫ
		printf("%d ",i);							//��ӡ����
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);	//������̨����ַ�����ɫ����Ϊ��ɫ(��ԭ)
		for (j = 1; j < COLS-1; j++) {
			printf("%c ",arr[i][j]);
		}
		putchar('\n');
	}
	printf("-------------------\n");
	printf("mines:21\n");
}

void RandPlant(char arr[ROWS][COLS],char arr2[ROWS][COLS]) {
	for (int i = 1; i <=21;i++) {					//���õȼ��任�׵�����,��ʾ�׵�����	  �׵�����Խ��,���׵Ĺ��̾�Խ��,���򲻸���,������ʱ���Բ���(�ײ�Ҫ����������!)
		while (1) {
			int x = rand()%9+1;						//���÷�Χ1-9
			int y = rand()%9+1;
			if (arr[x][y]=='a') {					//x >= 1 && x <= 9 && y >= 1 && y <= 9&&
							arr[x][y] = 'A';
							//arr2[x][y] = 'x';	    //���ڴ���Ԥ��,չʾ������Ҫ����
							break;
			}
		}
	}
}

//�����㷨
int isHow(char arr[ROWS][COLS],int x,int y) {
	int count = 0;
	int i = 0, j = 0;
	for (i = x - 1;i <= x + 1;i++) {
		for (j = y - 1; j <= y + 1;j++) {
			if (arr[i][j] == 'A')
				count++;
		}
	}
	return count;
}

char Playerscan(char arr[ROWS][COLS], char arr2[ROWS][COLS],int x, int y) {
	if (arr[x][y] == 'A')							//arr��ɶԱ�,arr2��Ӧչʾ
		return 'G';
	arr2[x][y] = isHow(arr, x, y) + '0';			//ת��Ϊ�ַ�'n'	    0��ASCLL��+ƫ����n=n��ASCLL��ֵ
	arr[x][y] = 'n';								//ͬ��������Ϣ����,�ж�������ظ�����Ϸ�ļ�������Ϸ��ʤ��

	for(int i=1;i<=ROW;i++)
		for(int j=1;j<=COL;j++)
			if (arr[i][j]=='a') {
				return 'C';
			}

	return 'W';
}