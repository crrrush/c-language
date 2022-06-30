#pragma once


#include<stdio.h>

#include<stdlib.h>

#include<time.h>


#define ROW 9
#define COL 9

#define ROWS 11
#define COLS 11

#define MINE 10


void Initi_board(char board[ROWS][COLS], int row, int col, char ch);

void display_board(char board[ROWS][COLS], int row, int col);

void set_mine(char board[ROWS][COLS], int row, int col, int m);

void check_mine(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col);

void Expand(char board_a[ROWS][COLS], char board_b[ROWS][COLS], int rows, int cols, int * p);
