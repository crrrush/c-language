#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


void menu()
{
	printf("*********************************\n");
	printf("*******      1.play        ******\n");
	printf("*******      0.exit        ******\n");
	printf("*********************************\n");
}

void game()//��Ϸģ��ʵ��
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	srand((unsigned int)time(NULL));
	//��ʼ�����׷���
	Initi_board(mine, ROWS, COLS, '0');
	Initi_board(show, ROWS, COLS, '*');

	//��ʾ����
	//display_board(mine, ROWS, COLS);
	display_board(show, ROWS, COLS);

	//������
	set_mine(mine, ROWS, COLS, MINE);
	//display_board(mine, ROWS, COLS);

	
	//�Ų���
	check_mine(mine, show, ROWS, COLS);
	
}


int main()//ɨ��
{
	int input = 0;
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("        ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}




