#pragma once
// SeqList.h

#include <stdio.h>

#include <assert.h>

#include <stdlib.h>

//#define DEBUG

typedef int SLDateType;

typedef struct SeqList
{
	SLDateType* a;
	size_t size;
	size_t capacity;
}SeqList;

#define INIT_CAP 1

#define CAPACITY_MULTIPLE 2

// 对数据的管理:增删查改 

//初始化
void SeqListInit(SeqList* ps);

//销毁
void SeqListDestroy(SeqList* ps);

//展示所有数据
void SeqListPrint(SeqList* ps);

//尾插
void SeqListPushBack(SeqList* ps, SLDateType x);

//头插
void SeqListPushFront(SeqList* ps, SLDateType x);

//头删
void SeqListPopFront(SeqList* ps);

//尾删
void SeqListPopBack(SeqList* ps);

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x);

// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);

// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos);

void SLModify(SeqList* psl, size_t pos, SLDateType x);

//返回pos位置的值
SLDateType SeqListPosFind(SeqList* ps, size_t pos);


void FILE_READ_B(SeqList* pc);


void FILE_READ_A(SeqList* pc);

