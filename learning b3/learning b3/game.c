#define _CRT_SECURE_NO_WARNINGS

#include"game.h"


void initi_board(char board[ROW][COL], int row, int col)//���̳�ʼ��
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


void Create_board(char board[ROW][COL], int row, int col)//��������
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

void Playermove(char board[ROW][COL], int row, int col)//�������
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("�����������µ����꣺\n");
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
				printf("��Ǹ���ô��ѱ�ռ�ã�������ѡ��\n");
			}
		}
		else
			printf("����ֵ���Ϸ������������룺\n");
	}
	
}

void Computermove(char board[ROW][COL], int row, int col)//��������
{
	printf("�����£�\n");
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;

		//�ж�ռ��
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


char judge_condition(char board[ROW][COL], int row, int col)//�ж�����״̬
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//�ж�����ͬ
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][0];
	}

	for (j = 0; j < col; j++)//�ж�����ͬ
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[0][j];
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//�ж϶Խ�����ȣ�ע�����Ҫ�Ż������������д�˴�
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	   		
	if (full_board(board, ROW, COL))
		return 'D';
	
	return 'C';
}

void game()//��Ϸģ��ʵ��
{
	char board[ROW][COL];
	char recei = 0;
	srand((unsigned int)time(NULL));
	//��ʼ������
	initi_board(board, ROW, COL);

	//��������
	Create_board(board, ROW, COL);
	printf("��������Ҫ�µ�������꣬ʾ������һ�е�һ��1 1\n");
	

	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		Create_board(board, ROW, COL);

		//�ж�����״̬
		recei = judge_condition(board,ROW,COL);
		if (recei == '*'||recei == 'D')
			break;
	
		//��������
		Computermove(board, ROW, COL);
		Create_board(board, ROW, COL);
		//�ж�����״̬
		recei = judge_condition(board, ROW, COL);
		if (recei == '#'||recei == 'D')
			break;
	}
	if (recei == '*')
	{
		printf("��Ϸ���������ʤ����\n");
		printf("��ѡ���Ƿ�ʼ��һ����Ϸ\n");
	}
	else if (recei == '#')
	{
		printf("��Ϸ����������ʤ����\n");
		printf("��ѡ���Ƿ�ʼ��һ����Ϸ\n");
	}
	else 
	{
		printf("��Ϸ������ƽ�֣�\n");
		printf("��ѡ���Ƿ�ʼ��һ����Ϸ\n");
	}

}

