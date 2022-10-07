#define _CRT_SECURE_NO_WARNINGS


#include"Queue.h"

// ��ʼ������ 
void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_rear = NULL;
	q->size = 0;
}

// ��β����� 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	//������Ԫ�ز���ʼ��
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
	//����
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

// ��ͷ������ 
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

// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->_front->_data;
}

// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	return q->_rear->_data;
}

// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q)
{
	assert(q);
	return q->size;
}

// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->_front == NULL && q->_rear == NULL;
}

// ���ٶ��� 
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

