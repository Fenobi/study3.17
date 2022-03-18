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
	printf("玩家1走>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标>:");
		scanf("%d %d", &x, &y);
		//判断坐标合法性

		if (x <= row && x >= 1 && y >= 1 && y <= col)
		{
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入>:");
			}
		}
		else
		{
			printf("坐标非法，请重新输入<:");
		}
	}
}

void Player2Move(char board[ROW][COL], int row, int col)
{
	printf("玩家2走:>\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标>:");
		scanf("%d %d", &x, &y);
		//判断坐标合法性

		if (x <= row && x >= 1 && y >= 1 && y <= col)
		{
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入>:");
			}
		}
		else
		{
			printf("坐标非法，请重新输入<:");
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
//	//判断行
//	for (i = 0; i < 5; i++)
//	{
//		
//		if (board[x - 1 + i][y - 1] == board[x-1][y-1] && (x - 1 + i) <= row)//向右检查
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
//		if (board[x - 1 - i][y - 1] == board[x-1][y-1] && (x - 1 - i) >= 0)//向左检查
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
//	//判断列
//	for (i = 0; i < 5; i++)
//	{
//		if (board[x][y-1-i]==board[x-1][y-1]&&(y-1-i)>=0)//向上检查
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
//		if (board[x][y - 1 + i] == board[x-1][y-1] && (y - 1 + i) <= col)//向下检查
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
//	//判断斜线
//	for (i = 0; i < 5; i++)
//	{
//		if (board[x + i - 1][y + i - 1] == board[x-1][y-1] && (x + i - 1) <= row && (y + i - 1) >= 0)//向右下检查
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
//		if (board[x - i - 1][y - i - 1] == board[x-1][y-1] && (x - i - 1) <= row && (y - i - 1) >= 0)//向左上检查
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
//		if (board[x - i - 1][y + i - 1] == board[x-1][y-1] && (x - i - 1) <= row && (y + i - 1) >= 0)//向左下检查
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
//		if (board[x + i - 1][y - i - 1] == board[x-1][y-1] && (x + i - 1) <= row && (y - i - 1) >= 0)//向右上检查
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

//判断游戏状态
char IsWin(char board[ROW][COL]) 
{


	//判断行
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
	//判断列
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
	//判断左对角线
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
	//判断右对角线
	for (int i = 0; i < ROW - 4; i++) {
		for (int j = 4; j < COL; j++) {
			if (board[i][j] == board[i - 1][j - 1] && board[i][j] == board[i - 2][j - 2]
				&& board[i][j] == board[i - 3][j - 3]
				&& board[i][j] == board[i - 4][j - 4] && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	//判断棋盘是否满了
	/*for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (board[i][j] == ' ')
				return 'P';
		}
	}*/

	return 'J';
}
