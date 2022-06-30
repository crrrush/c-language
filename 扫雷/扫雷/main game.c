#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


void menu()
{
	printf("*********************************\n");
	printf("*******      1.play        ******\n");
	printf("*******      0.exit        ******\n");
	printf("*********************************\n");
}

void game()//游戏模块实现
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	srand((unsigned int)time(NULL));
	//初始化排雷方阵
	Initi_board(mine, ROWS, COLS, '0');
	Initi_board(show, ROWS, COLS, '*');

	//显示方阵
	//display_board(mine, ROWS, COLS);
	display_board(show, ROWS, COLS);

	//布置雷
	set_mine(mine, ROWS, COLS, MINE);
	//display_board(mine, ROWS, COLS);

	
	//排查雷
	check_mine(mine, show, ROWS, COLS);
	
}


int main()//扫雷
{
	int input = 0;
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("        扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);

	return 0;
}




