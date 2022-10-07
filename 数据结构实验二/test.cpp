#define _CRT_SECURE_NO_WARNINGS


#include"Queue.h"

#include"stack.h"

#include<iostream>

using std::cout;
using std::endl;
using std::cin;


void testQ()
{
	Queue queue;
	Queue* q = &queue;
	QueueInit(q);
	FILE_READ(q);



	while (!QueueEmpty(q))
	{
		printf("%c ", QueueFront(q));
		QueuePop(q);
	}
	printf("\n");



	QueueDestroy(q);
}



void InitMaze(int m[11][11], int& row, int& col, char c)
{
	FILE* pf = NULL;
	if (c == 'A')
		pf = fopen("MazeA.txt", "r");
	else if (c == 'B')
		pf = fopen("MazeB.txt", "r");
	else if (c == 'C')
		pf = fopen("MazeC.txt", "r");
	
	if (pf == NULL)
	{
		perror("Open File failed");
		exit(-1);
	}
	fscanf(pf, "%d ", &row);
	fscanf(pf, "%d ", &col);

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			fscanf(pf, "%d ", &m[i][j]);
		}
	}

	fclose(pf);
	pf = NULL;

}




void SearchPath(int maze[11][11], int mask[11][11],  Stack* p, Path Exit)
{
	Path Top = StackTop(p);
	int x = Top.x;
	int y = Top.y;
	maze[1][1] = 1;
	while (x != Exit.x && y != Exit.y)
	{

		while (maze[x + 1][y] == 0  && x != Exit.x && y != Exit.y && mask[x + 1][y] == 0)
		{
			Path tmp;
			x++;
			mask[x][y] = 1;
			tmp.x = x;
			tmp.y = y;
			StackPush(p, tmp);
			Top = StackTop(p);
		}

		while (maze[x][y + 1] == 0  && x != Exit.x && y != Exit.y && mask[x][y + 1] == 0)
		{
			Path tmp;
			y++;
			mask[x][y] = 1;
			tmp.x = x;
			tmp.y = y;
			StackPush(p, tmp);
			Top = StackTop(p);
		}

		while (maze[x - 1][y] == 0  && x != Exit.x && y != Exit.y && mask[x - 1][y] == 0)
		{
			Path tmp;
			x--;
			mask[x][y] = 1;
			tmp.x = x;
			tmp.y = y;
			StackPush(p, tmp);
			Top = StackTop(p);
		}

		while (maze[x][y - 1] == 0  && x != Exit.x && y != Exit.y && mask[x][y - 1] == 0)
		{
			Path tmp;
			y--;
			mask[x][y] = 1;
			tmp.x = x;
			tmp.y = y;
			StackPush(p, tmp);
			Top = StackTop(p);
		}

		while (maze[x + 1][y] + maze[x - 1][y] + maze[x][y + 1] + maze[x][y - 1] + mask[x][y] > 3)
		{
			StackPop(p);
			Top = StackTop(p);
			maze[x][y] = 1;
			x = Top.x;
			y = Top.y;
		}

	}


}

void testS()
{
	Stack path;
	Stack* p = &path;
	StackInit(p);

	
	//建立迷宫
	char MazeChoice = 'A';
	//printf("******* 输入迷宫编号 ******\n");
	//printf("**** A:8*8 B;5*5 C:9*8 ****\n");
	//cin >> MazeChoice;

	int maze[11][11] = { 0 };
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			maze[i][j] = 1;
		}
	}

	int col = 0;
	int row = 0;

	InitMaze(maze, row, col, MazeChoice);

	//设置起始点和终点
	Path Entrance = { 1,1 };
	Path Exit = { row,col };
	
	StackPush(p, Entrance);

	int mask[11][11] = { 0 };
	mask[1][1] = 1;

	//用Path从起始点开始找出口
	SearchPath(maze, mask, p, Exit);

	int step = 0;

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			printf("%d ", mask[i][j]);
			step += mask[i][j];
		}
		cout << endl;
	}

	cout << step << endl;

	StackDestroy(p);
}


void Expriment1()
{
	Queue queue;
	Queue* q = &queue;
	QueueInit(q);

	FILE_READ(q);


	int n = 2;
	while (n--)
	{
		printf("%c ", QueueFront(q));
		QueuePop(q);
	}
	printf("\n");

	cout << QueueFront(q) << endl;

	cout << QueueSize(q) << endl;

	QueueDestroy(q);
}

void Expriment2()
{
	Stack path;
	Stack* p = &path;
	StackInit(p);


	//建立迷宫
	char MazeChoice = 'C';

	int maze[11][11] = { 0 };
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			maze[i][j] = 1;
		}
	}

	int col = 0;
	int row = 0;

	InitMaze(maze, row, col, MazeChoice);

	//设置起始点和终点
	Path Entrance = { 1,1 };
	Path Exit = { row,col };

	StackPush(p, Entrance);

	int mask[11][11] = { 0 };
	mask[1][1] = 1;

	//用Path从起始点开始找出口
	SearchPath(maze, mask, p, Exit);

	int step = 0;

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			step += mask[i][j];
		}
	}

	cout << step << endl;

	StackDestroy(p);
}




int main()
{
	//testQ();
	//testS();
	//Expriment1();
	Expriment2();
	


	return 0;
}