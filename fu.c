#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("***************************************\n");
	printf("***************  1.开始   *************\n");
	printf("***************  0.结束   *************\n");
	printf("***************************************\n");

}
void game()
{
	char board[ROW][COL];
	
	//初始化棋盘
	Initboard(board, ROW, COL);
	system("cls");

	//打印棋盘
	DisplayBoard(board, ROW, COL);

	char t = 0;//接收游戏状态
	while (1)
	{
		int x = 0;
		int y = 0;
		
		//玩家1输入
		PlayerMove(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);

		//判断玩家1胜利
		t = IsWin(board);
		if (t != 'J')
		{
			break;
		}
		/*Sleep(500);*/
		//玩家2输入
		
		Player2Move(board, ROW, COL);
		system("cls");
		DisplayBoard(board, ROW, COL);

		//判断玩家2胜利
		t = IsWin(board);
		if (t != 'J')
		{
			break;
		}
	}
	//判断其他状态
	if (t == '*')
	{
		printf("游戏结束，玩家1获胜\n");

	}
	else if (t == '#')
	{
		printf("游戏结束，玩家2获胜\n");
	}
	/*else
	{
		printf("游戏结束，平局\n");
	}*/
}

int main()
{
	/*srand((unsigned int)time(NULL));*/
	int n = 0;
	do
	{
		menu();
		printf("请选择：>");
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
			printf("退出\n");
			break;
		}
		default:
		{
			printf("选择错误，请重新选择\n");
			break;
		}
		}
	} while (n);
	return 0;
}