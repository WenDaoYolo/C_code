#define _CRT_SECURE_NO_WARNINGS 1
#include "SanZiQi.h"


void Menu(){
	printf("********************************\n");
	printf("*  Menu:                       *\n");
	printf("*            1.paly            *\n");
	printf("*            2.exit            *\n");
	printf("*                              *\n");
	printf("********************************\n");
}

void Reboard(char arr[ROW][COL]) {	
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)				//�����Զ������ר���������к��У����������Զ���ı�ʶ������ʹ�������Ӷ�����ͨ��
		for (j = 0; j < COL; j++)
			arr[i][j] = ' ';
}

void Printboard(char arr[ROW][COL]) {
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf(" %c ", arr[i][j]);
			if(j!=COL-1)
			printf("|");
		}
		putchar('\n');
		if(i!=ROW-1)
		for (j = 0; j < COL; j++) {
			printf("---");
			if (j != COL - 1)
				printf("|");
		}
		putchar('\n');
	}
}

void PlayerMove(char arr[ROW][COL]) {
	int x, y;
	printf("��Ļغ�,����������>");
	while (1) {
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL&&arr[x-1][y-1]==' ') {
			arr[x - 1][y - 1] = 'x';
			break;
		}
		else
			printf("����Ƿ�,����������>");
	}
}

void ComputerMove(char arr[ROW][COL]) {
	while (1) {
		int x = rand() % ROW;
		int y = rand() % COL;
		if (arr[x][y] == ' ') {
			arr[x][y] = 'o';
				break;
		}
	}
}


char IsGameStatus(char arr[ROW][COL]) {
	//����
	for (int j = 0; j < ROW; j++) {
		if ((arr[j][0] == arr[j][1] && arr[j][1] == arr[j][2]) && arr[j][0] != ' ') {
				return arr[j][0];
		}
	}
	//����
	for (int i = 0; i < COL; i++) {
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')
			return arr[0][i];
	}
	//�Խ���
		if (arr[0][0] == arr[1][ 1] && arr[1][1] == arr[2][ 2] && arr[1][1] != ' ')
			return arr[1][1];
		else if(arr[0][COL-1]==arr[1][1]&&arr[1][1]==arr[ROW-1][0]&&arr[1][1]!=' ')
			return arr[1][1];


	//�������
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (arr[i][j] == ' ') {
				return 'c';
			 }
		}
	}

		return 'q';
}


