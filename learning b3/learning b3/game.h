#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<stdlib.h>

#include<time.h>


#define ROW 3
#define COL 3

void game();//游戏模块实现

void initi_board(char board[ROW][COL],int row, int col);//棋盘初始化


void Create_board(char board[ROW][COL], int row, int col);//生成棋盘

void Playermove(char board[ROW][COL],int row, int col);//玩家下棋

void Computermove(char board[ROW][COL], int row, int col);//电脑下棋

char judge_condition(char board[ROW][COL], int row, int col);//判断棋盘状态

int full_board(char board[ROW][COL], int row, int col);//判断棋盘是否下满
