#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROW 9																//�������̲���
#define COL 9
#define	ROWS ROW+2
#define	COLS COL+2

void Menu();																//��ӡ��Ϸ�˵�
void Reboard(char arr[ROWS][COLS], char flag);								//��ʼ������
void PrintBoard(char arr[ROWS][COLS]);										//��ӡ����
void RandPlant(char arr[ROWS][COLS],char arr2[ROWS][COLS]);					//�������
char Playerscan(char arr[ROWS][COLS],char arr2[ROWS][COLS],int x,int y);	//��ȡ��Ϸ״̬	C���� W��Ϸʤ�� C��Ϸ����
int isHow(char arr[ROWS][COLS], int x, int y);								//�����㷨,��������	������ɢ->������ɢ