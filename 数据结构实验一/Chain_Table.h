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


// 动态申请一个节点
SListNode* GenerateSListNode(SLTDataType x);

// 单链表打印
//void SListPrint(SListNode* plist);

// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDataType x);

// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDataType x);

// 单链表的尾删
void SListPopBack(SListNode** pplist);

// 单链表头删
void SListPopFront(SListNode** pplist);

// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDataType x);

// 单链表在pos位置之后插入x

// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLTDataType x);


// 单链表删除pos位置之后的值


// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos);


// 单链表的销毁
void SListDestroy(SListNode** pplist);


// 单链表查找i位置
SListNode* SListFind_i(SListNode* plist, int i);

//i位置插入
void SListInsert_i(SListNode* plist, SLTDataType x, int i);

//删除位置i
void SListErase_i(SListNode** plist, int i);

//修改位置i
void SListModify_i(SListNode* plist, SLTDataType x, int i);


void FILE_RAED_BOOK(SListNode** p);
