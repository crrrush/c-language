#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<stdlib.h>

#include<time.h>


#define ROW 3
#define COL 3

void game();//��Ϸģ��ʵ��

void initi_board(char board[ROW][COL],int row, int col);//���̳�ʼ��


void Create_board(char board[ROW][COL], int row, int col);//��������

void Playermove(char board[ROW][COL],int row, int col);//�������

void Computermove(char board[ROW][COL], int row, int col);//��������

char judge_condition(char board[ROW][COL], int row, int col);//�ж�����״̬

int full_board(char board[ROW][COL], int row, int col);//�ж������Ƿ�����
