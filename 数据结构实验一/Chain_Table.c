#define _CRT_SECURE_NO_WARNINGS

#include "Chain_Table.h"

// ��̬����һ���ڵ�
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

// �����������
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


// �������ӡ
//void SListPrint(SListNode* plist)
//{
//	while (plist)
//	{
//		printf("%d->", plist->data);
//		plist = plist->next;
//	}
//	printf("\n");
//}


// ������β��
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

// �������ͷ��
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

// �������βɾ
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

// ������ͷɾ
void SListPopFront(SListNode** pplist)
{
	assert(pplist);
	assert(*pplist != NULL);

	SListNode* next = (*pplist)->next;
	free(*pplist);
	*pplist = next;
}

// ���������
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



// ���������iλ��
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

//iλ�ò���
void SListInsert_i(SListNode* plist, SLTDataType x, int i)
{
	assert(plist);
	SListNode* cur = SListFind_i(plist, i);
	
	SListNode* newnode = GenerateSListNode(x);
	SListNode* next = cur->next;

	cur->next = newnode;
	newnode->next = next;
}

//ɾ��λ��i
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

//�޸�λ��i
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

