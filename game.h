#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


#define ROW 13
#define COL 13

//初始化函数
void Initboard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void Player2Move(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL]);
//判断输赢
//玩家1获胜输出*
//玩家2获胜输出#
//平局输出P
//游戏继续进行输出J