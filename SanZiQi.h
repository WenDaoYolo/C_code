#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

#define ROW 3															//���̲�������
#define COL 3
void Menu();															//��ӡ��Ϸ�˵�												
void Reboard(char arr[ROW][COL]);										//��ʼ������Ϊ�ո�
void Printboard(char arr[ROW][COL]);									//��ӡ����
void PlayerMove(char arr[ROW][COL]);									//����ƶ�-��������
void ComputerMove(char arr[ROW][COL]);									//�����ƶ�-��������
char IsGameStatus(char arr[ROW][COL]);									//��ȡ��Ϸ״̬������	   x���Ӯ o����Ӯ qƽ�� c��Ϸ����