#define _CRT_SECURE_NO_WARNINGS 1
#include "SaoLei.h"				//�漰��������,�������Ļ��ӡ����--���⴫ͳ���к���ѧ������Ļ���

void game() {
	//��ӡ�˵�						
	void Menu();					//�Ż��Ӿ�:��������������ʾ������ʵ������Ļ
	//�������
	char real[ROWS][COLS];			//��Ϣ�洢����	A��,a����
	char show[ROWS][COLS];			//��Ϣչʾ����	*δ֪������,x��,
	int guessx, guessy,flag;
	char Status=0;
	//��ʼ������
	Reboard(real,'a');
	Reboard(show, '*');
	//�������
	RandPlant(real, show);
	//��ӡ����
	PrintBoard(show);
	//���ɨ��
	while (1) {				//�жϺϷ���
		do {
			printf("����������>");
			scanf("%d%d", &guessx, &guessy);
			flag = !(guessx >= 1 && guessx <= ROW && guessy >= 1 && guessy <= COL&&(real[guessx][guessy] == 'A'|| real[guessx][guessy] == 'a'));
			if(flag)
				printf("����Ƿ�\n");
		} while (flag);
		system("cls");					//����
		//��ȡ��Ϸ״̬
		Status = Playerscan(real,show, guessx, guessy);
		if (Status != 'C')
			break;						//������Ϸ
		//��ӡ����
		PrintBoard(show);
	}

		//�ж���Ϸ���
		if (Status == 'G') {
			show[guessx][guessy] = 'x';	//��ʾ�ȵ�����
			PrintBoard(show);
			printf("GAME OVER!\n");
	}else if (Status == 'W') {
			PrintBoard(show);
			printf("YOU WIN!\n");
		}
		Sleep(2500);					//��ʱ����
		system("cls");
}

int main() {
	//�������				
	int choose;
	srand((unsigned int)time(NULL));
	do {
		Menu();
		printf("������>");
		scanf("%d",&choose);
		switch (choose){
		case 1:
			game();
			break;
		case 2:
			printf("Game exited!\n");
			break;
		default:
			printf("�������!\n");
			break;
		}
	} while (choose!=2);

	return 0;
}