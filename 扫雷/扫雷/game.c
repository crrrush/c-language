#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void Initi_board(char board[ROWS][COLS], int row, int col, char ch)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ch;
		}
	}

}


void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < col - 1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i < row - 1; i++)
	{
		printf("%d ", i);
		for (j = 1; j < col - 1; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void set_mine(char board[ROWS][COLS], int row, int col, int m)
{
	
	while (m)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			m--;
		}
	}
}


static char Total(char board[ROWS][COLS], int row, int col)
{
	return board[row - 1][col - 1] +
		board[row][col - 1] +
		board[row + 1][col - 1] +
		board[row + 1][col] +
		board[row + 1][col + 1] +
		board[row][col + 1] +
		board[row - 1][col + 1] +
		board[row - 1][col] - 8 * '0';
}




void Expand(char board_a[ROWS][COLS], char board_b[ROWS][COLS], int rows, int cols, int * p)//�Ӵ�����������Ų鷽������Χ�޵��׵�λ��ֱ�����׵�λ��
{
	if (rows < ROW && (Total(board_a, rows + 1, cols) + '0') == '0' && (board_b[rows + 1][cols] != '0'))
	{
		board_b[rows + 1][cols] = '0';
		Expand(board_a, board_b, rows + 1, cols, p);
		(*p)--;
	}
	else if (rows < ROW && (Total(board_a, rows + 1, cols) + '0') > '0' && (board_b[rows + 1][cols] != '0'))
	{
		board_b[rows + 1][cols] = Total(board_a, rows + 1, cols) + '0';
		(*p)--;
	}
	

	if (rows > 1 && (Total(board_a, rows - 1, cols) + '0') == '0' && (board_b[rows - 1][cols] != '0'))
	{
		board_b[rows - 1][cols] = '0';
		Expand(board_a, board_b, rows - 1, cols, p);
		(*p)--;
	}
	else if (rows > 1 && (Total(board_a, rows - 1, cols) + '0') > '0' && (board_b[rows - 1][cols] != '0'))
	{
		board_b[rows - 1][cols] = Total(board_a, rows - 1, cols) + '0';
		(*p)--;
	}


	if (cols < COL && (Total(board_a, rows, cols + 1) + '0') == '0' && (board_b[rows][cols + 1] != '0'))
	{
		board_b[rows][cols + 1] = '0';
		Expand(board_a, board_b, rows, cols + 1, p);
		(*p)--;
	}
	else if (cols < COL && (Total(board_a, rows, cols + 1) + '0') > '0' && (board_b[rows][cols + 1] != '0'))
	{
		board_b[rows][cols + 1] = Total(board_a, rows, cols + 1) + '0';
		(*p)--;
	}


	if (cols > 1 && (Total(board_a, rows, cols - 1) + '0') == '0' && (board_b[rows][cols - 1] != '0'))
	{
		board_b[rows][cols - 1] = '0';
		Expand(board_a, board_b, rows, cols - 1, p);
		(*p)--;
	}
	else if (cols > 1 && (Total(board_a, rows, cols - 1) + '0') > '0' && (board_b[rows][cols - 1] != '0'))
	{
		board_b[rows][cols - 1] = Total(board_a, rows, cols - 1) + '0';
		(*p)--;
	}
}


void check_mine(char board1[ROWS][COLS], char board2[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = ROW * COL - MINE;
	while (count)
	{
		printf("��������������꣺\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x < row && y >= 1 && y < col)
		{
			if (board1[x][y] == '1')
			{
				printf("���ź���������������Ϸ����\n");
				display_board(board1, ROWS, COLS);
				break;
			}
			else
			{
				board2[x][y] = Total(board1, x, y) + '0';

				if (board2[x][y] == '0')
					Expand(board1, board2, x, y, &count);

				display_board(board2, ROWS, COLS);
				//display_board(board1, ROWS, COLS);
				count--;
			}
		}
		else
		{
			printf("��Ǹ������������겻�Ϸ�������������\n");
		}
	}
	if (count == 0)
	{
		printf("��ϲ���Ų�����е��ף���Ϸʤ��\n");
		display_board(board1, ROWS, COLS);
		printf("�Ƿ������һ�֣�\n");
	}

}