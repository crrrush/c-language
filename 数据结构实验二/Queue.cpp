#define _CRT_SECURE_NO_WARNINGS


#include"Queue.h"

// 初始化队列 
void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_rear = NULL;
	q->size = 0;
}

// 队尾入队列 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	//申请新元素并初始化
	QNode* tmp = (QNode*)malloc(sizeof(QNode));
	if (tmp == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}
	else
	{
		tmp->_next = NULL;
		tmp->_data = data;
	}
	//插入
	if (q->_front == NULL)
	{
		q->_front = q->_rear = tmp;
	}
	else
	{
		q->_rear->_next = tmp;
		q->_rear = q->_rear->_next;
	}
	q->size++;
}

// 队头出队列 
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	QNode* Next = q->_front->_next;
	if (Next)
	{
		free(q->_front);
		q->_front = Next;
	}
	else
	{
		q->_front = q->_rear = Next;
	}
	--q->size;
}

// 获取队列头部元素 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->_front->_data;
}

// 获取队列队尾元素 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->_rear->_data;
}

// 获取队列中有效元素个数 
int QueueSize(Queue* q)
{
	assert(q);
	return q->size;
}

// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->_front == NULL && q->_rear == NULL;
}

// 销毁队列 
void QueueDestroy(Queue* q)
{
	assert(q);
	QNode* cur = q->_front;
	while (cur)
	{
		QNode* tmp = cur->_next;
		free(cur);
		cur = tmp;
	}
	q->_front = q->_rear = NULL;
}


void FILE_READ(Queue* q)
{
	assert(q);
	FILE* pf = fopen("QNode.txt", "r");
	if (pf == NULL)
	{
		perror("Open QNode.txt failed");
		exit(-1);
	}
	char input = 0;
	while (EOF != fscanf(pf, "%c ", &input))
	{
		QueuePush(q, input);
	}

	fclose(pf);
	pf = NULL;
}

