#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int n = 0;
			for (n = 0; n < col; n++)
			{
				printf("---");
				if (n < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	printf("���1��>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����������>:");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���

		if (x <= row && x >= 1 && y >= 1 && y <= col)
		{
			//�ж������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������>:");
			}
		}
		else
		{
			printf("����Ƿ�������������<:");
		}
	}
}

void Player2Move(char board[ROW][COL], int row, int col)
{
	printf("���2��:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("����������>:");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���

		if (x <= row && x >= 1 && y >= 1 && y <= col)
		{
			//�ж������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
			{
				printf("���걻ռ�ã�����������>:");
			}
		}
		else
		{
			printf("����Ƿ�������������<:");
		}
	}
}

//int IsFull(char broad[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (broad[i][j] == ' ')
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}



//char IsWin(char board[ROW][COL], int row, int col,int x,int y)
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	//�ж���
//	for (i = 0; i < 5; i++)
//	{
//		
//		if (board[x - 1 + i][y - 1] == board[x-1][y-1] && (x - 1 + i) <= row)//���Ҽ��
//		{
//			a++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		
//		if (board[x - 1 - i][y - 1] == board[x-1][y-1] && (x - 1 - i) >= 0)//������
//		{
//			a++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (a >= 6)
//	{
//		return board[x-1][y-1];
//	}
//
//	//�ж���
//	for (i = 0; i < 5; i++)
//	{
//		if (board[x][y-1-i]==board[x-1][y-1]&&(y-1-i)>=0)//���ϼ��
//		{
//			b++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (board[x][y - 1 + i] == board[x-1][y-1] && (y - 1 + i) <= col)//���¼��
//		{
//			b++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (b >= 5)
//	{
//		return board[x-1][y-1];
//	}
//
//	//�ж�б��
//	for (i = 0; i < 5; i++)
//	{
//		if (board[x + i - 1][y + i - 1] == board[x-1][y-1] && (x + i - 1) <= row && (y + i - 1) >= 0)//�����¼��
//		{
//			c++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (board[x - i - 1][y - i - 1] == board[x-1][y-1] && (x - i - 1) <= row && (y - i - 1) >= 0)//�����ϼ��
//		{
//			c++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (c >= 5)
//	{
//		return board[x-1][y-1];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (board[x - i - 1][y + i - 1] == board[x-1][y-1] && (x - i - 1) <= row && (y + i - 1) >= 0)//�����¼��
//		{
//			d++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		if (board[x + i - 1][y - i - 1] == board[x-1][y-1] && (x + i - 1) <= row && (y - i - 1) >= 0)//�����ϼ��
//		{
//			d++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (d >= 5)
//	{
//		return board[x-1][y-1];
//	}
//	/*int ret = IsFull(board, row, col);
//	if (ret == 1)
//	{
//		return 'P';
//	}*/
//	return 'J';
//
//}

//�ж���Ϸ״̬
char IsWin(char board[ROW][COL]) 
{


	//�ж���
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL - 4; j++) {
			if (board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2]
				&& board[i][j] == board[i][j + 3]
				&& board[i][j] == board[i][j + 4]
				&& board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	//�ж���
	for (int i = 0; i < ROW - 4; i++) {
		for (int j = 0; j < COL; j++) {
			if (board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j]
				&& board[i][j] == board[i + 3][j]
				&& board[i][j] == board[i + 4][j]
				&& board[i][j] != ' ') {

				return board[i][j];
			}
		}
	}
	//�ж���Խ���
	for (int i = 0; i < ROW - 4; i++) {
		for (int j = 0; j < COL - 4; j++) {
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2]
				&& board[i][j] == board[i + 3][j + 3]
				&& board[i][j] == board[i + 4][j + 4]
				&& board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	//�ж��ҶԽ���
	for (int i = 0; i < ROW - 4; i++) {
		for (int j = 4; j < COL; j++) {
			if (board[i][j] == board[i - 1][j - 1] && board[i][j] == board[i - 2][j - 2]
				&& board[i][j] == board[i - 3][j - 3]
				&& board[i][j] == board[i - 4][j - 4] && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	//�ж������Ƿ�����
	/*for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (board[i][j] == ' ')
				return 'P';
		}
	}*/

	return 'J';
}
