#define _CRT_SECURE_NO_WARNINGS 1
#include "SanZiQi.h"
								//˼��:���ʵ��n����,Ϊ�������һ���������ܵ��㷨���Զ�������Ѷȣ�,��ɫ�Ӿ�������,�Զ������̷���,��ʾս��,�鿴ս��...

void StartGame(){				//������Ϸ�߼�����

	char arr[ROW][COL];
	char Status;
	//��ʼ������Ϊ�ո�
	Reboard(arr);
	//��ӡ��ʼ����
	Printboard(arr);
	while (1) {
		//�����
		PlayerMove(arr);
		//��ӡ����		
		Printboard(arr);
		//��ȡ��Ϸ״̬
		Status=IsGameStatus(arr);
		if (Status != 'c')
			break;

		//������
		printf("���Իغ���...\n");
		ComputerMove(arr);
		Sleep(3500);
		//��ӡ����
		Printboard(arr);
		//��ȡ��Ϸ״̬
		Status=IsGameStatus(arr);
		if (Status != 'c')
			break;
	}

	Sleep(1000);
	//�ж���Ϸ״̬
	{
		if (Status == 'x')
			printf("Player win!\n");
		else if (Status == 'o')
			printf("Computer win!\n");
		else if(Status=='q')
			printf("Draw!\n");
	}
	Sleep(1000);
}

int main() {
	//�������
	int choose = 0;
	srand((unsigned int)time(NULL));
	//��ӡ��Ϸ�˵�
	do{
		Menu();
		printf(">");
		scanf("%d",&choose);
		switch (choose) {
		case 1:
			StartGame();
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