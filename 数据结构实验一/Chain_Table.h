#pragma once

// Chain_Table.h

#include<stdlib.h>

#include<stdio.h>

#include<assert.h>

#include<string.h>

//#define DEBUG


typedef struct book
{
	char id[20];
	char name[15];
	double price;
}book;

typedef book SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SListNode;


// ��̬����һ���ڵ�
SListNode* GenerateSListNode(SLTDataType x);

// �������ӡ
//void SListPrint(SListNode* plist);

// ������β��
void SListPushBack(SListNode** pplist, SLTDataType x);

// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDataType x);

// �������βɾ
void SListPopBack(SListNode** pplist);

// ������ͷɾ
void SListPopFront(SListNode** pplist);

// ���������
SListNode* SListFind(SListNode* plist, SLTDataType x);

// ��������posλ��֮�����x

// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLTDataType x);


// ������ɾ��posλ��֮���ֵ


// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);


// �����������
void SListDestroy(SListNode** pplist);


// ���������iλ��
SListNode* SListFind_i(SListNode* plist, int i);

//iλ�ò���
void SListInsert_i(SListNode* plist, SLTDataType x, int i);

//ɾ��λ��i
void SListErase_i(SListNode** plist, int i);

//�޸�λ��i
void SListModify_i(SListNode* plist, SLTDataType x, int i);


void FILE_RAED_BOOK(SListNode** p);
