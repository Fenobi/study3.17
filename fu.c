#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("***************************************\n");
	printf("***************  1.��ʼ   *************\n");
	printf("***************  0.����   *************\n");
	printf("***************************************\n");

}
void game()
{
	char board[ROW][COL];
	
	//��ʼ������
	Initboard(board, ROW, COL);
	system("cls");

	//��ӡ����
	DisplayBoard(board, ROW, COL);

	char t = 0;//������Ϸ״̬
	while (1)
	{
		int x = 0;
		int y = 0;
		
		//���1����
		PlayerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);

		//�ж����1ʤ��
		t = IsWin(board);
		if (t != 'J')
		{
			break;
		}
		/*Sleep(500);*/
		//���2����
		
		Player2Move(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);

		//�ж����2ʤ��
		t = IsWin(board);
		if (t != 'J')
		{
			break;
		}
	}
	//�ж�����״̬
	if (t == '*')
	{
		printf("��Ϸ���������1��ʤ\n");

	}
	else if (t == '#')
	{
		printf("��Ϸ���������2��ʤ\n");
	}
	/*else
	{
		printf("��Ϸ������ƽ��\n");
	}*/
}

int main()
{
	/*srand((unsigned int)time(NULL));*/
	int n = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("�˳�\n");
			break;
		}
		default:
		{
			printf("ѡ�����������ѡ��\n");
			break;
		}
		}
	} while (n);
	return 0;
}