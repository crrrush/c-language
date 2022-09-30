#define _CRT_SECURE_NO_WARNINGS

#include"SeqList.h"


//初始化
void SeqListInit(SeqList* ps)
{
	assert(ps);
	SLDateType* tmp = calloc(INIT_CAP, sizeof(SLDateType));
	if (tmp == NULL)
	{
		perror("calloc failed");
		exit(-1);
	}
	ps->a = tmp;
	ps->capacity = INIT_CAP;
	ps->size = 0;
}

//销毁
void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->size = 0;
	ps->capacity = 0;
}

//展示所有数据
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//检查容量
void SeqListCheckCapacity(SeqList* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		SLDateType* tmp = realloc(ps->a, CAPACITY_MULTIPLE * ps->capacity * sizeof(SLDateType));
		if (tmp == NULL)
		{
			perror("realloc failed");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity *= CAPACITY_MULTIPLE;
	}
}


//尾插
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

//头插
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	int i = 0;
	for (i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[0] = x;
	ps->size++;
}

//尾删
void SeqListPopBack(SeqList* ps)
{	
	assert(ps); 
	assert(ps->size > 0);
	ps->size--;
}

//头删
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	assert(ps->size > 0);
	//SeqListCheckCapacity(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}

// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	assert(pos <= ps->size);
	SeqListCheckCapacity(ps);
	int i = 0;
	for (i = ps->size; i > pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->size++;
}

// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps);
	assert(pos < ps->size);

	int i = 0;
	for (i = pos; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

void SLModify(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	assert(pos < ps->size);
	ps->a[pos] = x;
}


//返回pos位置的值
SLDateType SeqListPosFind(SeqList* ps, size_t pos)
{
	assert(pos > 0 && pos <= ps->size);

	return ps->a[pos - 1];
}



void FILE_READ_A(SeqList* pc)
{
	assert(pc);
	FILE* pf = fopen("ListA.txt", "r");
	if (pf == NULL)
	{
		perror("Open ListA.txt failed");
		exit(-1);
	}
	int input = 0;
	while (EOF != fscanf(pf, "%d ", &input))
	{
		SeqListPushBack(pc, input);
	}

	fclose(pf);
	pf = NULL;
}


void FILE_READ_B(SeqList* pc)
{
	assert(pc);
	FILE* pf = fopen("ListB.txt", "r");
	if (pf == NULL)
	{
		perror("Open ListB.txt failed");
		exit(-1);
	}
	int input = 0;
	while (EOF != fscanf(pf, "%d ", &input))
	{
		SeqListPushBack(pc, input);
	}

	fclose(pf);
	pf = NULL;
}


