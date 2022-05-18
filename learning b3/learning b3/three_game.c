#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


void menu()
{
	printf("*********************************\n");
	printf("*******      1.play        ******\n");
	printf("*******      0.exit        ******\n");
	printf("*********************************\n");
}


int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
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