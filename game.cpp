#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include "game.h"

void menu1(int num) {
	switch (num) {
	case 1:
		printf("Let's do it!\n");
		game();
		break;
	case 2:
		break;
	default:
		printf("�������!\n");
		break;
	}
}

void menu2() {
	printf("*===================================================*\n");
	printf("|    Menu:                                          |\n");
	printf("|                     1.play                        |\n");
	printf("|                     2.exit                        |\n");
	printf("|                                                   |\n");
	printf("*===================================================*\n");
}

void menu3(int x, int y) {
	printf("*===================================================*\n");
	printf("|    Result:                                        |\n");
	printf("|                     ���ִ���:%d                    |\n", x);
	printf("|                     ��ʷ���:%d                    |\n", y);
	printf("|                                                   |\n");
	printf("*===================================================*\n");
}

void game() {
	int num = rand() % 100, count = 0;
	static int mincount = 99999;
	int x;
	while (1) {
		printf("������:");
		scanf("%d", &x);
		if (x > num) {
			printf("�´���!\n");
			count++;
		}
		else if (x < num) {
			printf("��С��!\n");
			count++;
		}
		else {
			printf("\a��ϲ�¶���!\n");
			count++;
			if (count <= mincount)
				mincount = count;
			menu3(count, mincount);
			Sleep(2500);
			system("cls");
			break;
		}
	}
}

void ProgramCtrl(){
	int choose;
	srand((unsigned int)time(NULL));			//�������������
	do {
		menu2();
		printf(">");
		scanf("%d", &choose);
		menu1(choose);
	} while (choose != 2);
}
