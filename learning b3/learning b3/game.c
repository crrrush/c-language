#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


void initi_board(char board[ROW][COL], int row, int col)//棋盘初始化
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


void Create_board(char board[ROW][COL], int row, int col)//生成棋盘
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col - 1)
					printf("|");
			}
		}
		printf("\n");
	}

}

void Playermove(char board[ROW][COL], int row, int col)//玩家下棋
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("请您输入您下的坐标：\n");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("抱歉！该处已被占用，请重新选择：\n");
			}
		}
		else
			printf("输入值不合法，请重新输入：\n");
	}
	
}

void Computermove(char board[ROW][COL], int row, int col)//电脑下棋
{
	printf("电脑下：\n");
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;

		//判断占用
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


int full_board(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
			
		}
	}
	return  1;
}


char judge_condition(char board[ROW][COL], int row, int col)//判断棋盘状态
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//判断行相同
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][0];
	}

	for (j = 0; j < col; j++)//判断列相同
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[0][j];
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//判断对角线相等，注意如果要优化扩张棋盘需改写此处
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	   		
	if (full_board(board, ROW, COL))
		return 'D';
	
	return 'C';
}

void game()//游戏模块实现
{
	char board[ROW][COL];
	char recei = 0;
	srand((unsigned int)time(NULL));
	//初始化棋盘
	initi_board(board, ROW, COL);

	//生成棋盘
	Create_board(board, ROW, COL);
	printf("请输入您要下的棋的坐标，示例：第一行第一列1 1\n");
	

	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		Create_board(board, ROW, COL);

		//判断棋盘状态
		recei = judge_condition(board,ROW,COL);
		if (recei == '*'||recei == 'D')
			break;
	
		//电脑下棋
		Computermove(board, ROW, COL);
		Create_board(board, ROW, COL);
		//判断棋盘状态
		recei = judge_condition(board, ROW, COL);
		if (recei == '#'||recei == 'D')
			break;
	}
	if (recei == '*')
	{
		printf("游戏结束，玩家胜利！\n");
		printf("请选择是否开始下一局游戏\n");
	}
	else if (recei == '#')
	{
		printf("游戏结束，电脑胜利！\n");
		printf("请选择是否开始下一局游戏\n");
	}
	else 
	{
		printf("游戏结束，平局！\n");
		printf("请选择是否开始下一局游戏\n");
	}

}

