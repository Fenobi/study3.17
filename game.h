#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


#define ROW 13
#define COL 13

//��ʼ������
void Initboard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void Player2Move(char board[ROW][COL], int row, int col);

char IsWin(char board[ROW][COL]);
//�ж���Ӯ
//���1��ʤ���*
//���2��ʤ���#
//ƽ�����P
//��Ϸ�����������J