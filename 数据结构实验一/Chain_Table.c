#define _CRT_SECURE_NO_WARNINGS

#include "Chain_Table.h"

// 动态申请一个节点
SListNode* GenerateSListNode(SLTDataType x)
{
	SListNode* NewNode = (SListNode*)malloc(sizeof(SListNode));
	if (NewNode == NULL)
	{
		perror("malloc faied");
		exit(-1);
	}
	memcpy(&(NewNode->data), &x, sizeof(x));
	NewNode->next = NULL;

	return NewNode;
}

// 单链表的销毁
void SListDestroy(SListNode** pplist)
{
	assert(pplist);
	SListNode* cur = *pplist;
	while (cur)
	{
		SListNode* tmp = cur->next;
		free(cur);
		cur = tmp;
	}
	*pplist = NULL;
}


// 单链表打印
//void SListPrint(SListNode* plist)
//{
//	while (plist)
//	{
//		printf("%d->", plist->data);
//		plist = plist->next;
//	}
//	printf("\n");
//}


// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDataType x)
{
	assert(pplist);
	SListNode* newnode = GenerateSListNode(x);

	while (*pplist)
	{
		pplist = &((*pplist)->next);
	}
	*pplist = newnode;
}

// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDataType x)
{
	assert(pplist);
	SListNode* newnode = GenerateSListNode(x);

	if (*pplist)
	{
		SListNode* next = *pplist;
		*pplist = newnode;
		newnode->next = next;
	}
	else
	{
		*pplist = newnode;
	}

}

// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	assert(*pplist != NULL);

	SListNode* tail = *pplist;
	if (tail->next == NULL)
	{
		free(tail);
		*pplist = NULL;
	}
	else
	{
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

// 单链表头删
void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	assert(*pplist != NULL);

	SListNode* next = (*pplist)->next;
	free(*pplist);
	*pplist = next;
}

// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDataType x)
{
	SListNode* cur = plist;

	while (cur)
	{
		if (!memcmp(&(cur->data), &x, sizeof(x)))
			return cur;

		cur = cur->next;
	}

	return NULL;
}


void SListInsertAfter(SListNode* pos, SLTDataType x)
{
	SListNode* newnode = GenerateSListNode(x);
	SListNode* next = pos->next;

	pos->next = newnode;
	newnode->next = next;

}

void SListEraseAfter(SListNode* pos)
{
	assert(pos->next);
	SListNode* next = pos->next->next;
	free(pos->next);
	pos->next = next;
}



// 单链表查找i位置
SListNode* SListFind_i(SListNode* plist, int i)
{
	assert(plist);
	SListNode* cur = plist;

	while (cur && (i > 0))
	{
		i--;
		if (i == 0)
			return cur;

		cur = cur->next;
	}

	return NULL;
}

//i位置插入
void SListInsert_i(SListNode* plist, SLTDataType x, int i)
{
	assert(plist);
	SListNode* cur = SListFind_i(plist, i);
	
	SListNode* newnode = GenerateSListNode(x);
	SListNode* next = cur->next;

	cur->next = newnode;
	newnode->next = next;
}

//删除位置i
void SListErase_i(SListNode** plist, int i)
{
	assert(plist);
	SListNode* cur = SListFind_i(*plist, i - 1);
	if (cur == NULL)
	{
		*plist = (*plist)->next;
		free(cur);
	}
	else
	{
		SListEraseAfter(cur);
	}
}

//修改位置i
void SListModify_i(SListNode* plist, SLTDataType x, int i)
{
	assert(plist);
	SListNode* cur = SListFind_i(plist, i);
	memmove(&(cur->data), &x, sizeof(x));
}


void FILE_RAED_BOOK(SListNode** p)
{
	assert(p);
	FILE* pf = fopen("book.txt", "r");
	if (pf == NULL)
	{
		perror("Open book.txt failed");
		exit(-1);
	}
	book input;
	while (EOF != fscanf(pf, "%s %s %lf", input.id,input.name,&(input.price)))
	{
		SListPushBack(p, input);
	}

	fclose(pf);
	pf = NULL;
}

