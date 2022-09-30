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

// �����ݵĹ���:��ɾ��� 

//��ʼ��
void SeqListInit(SeqList* ps);

//����
void SeqListDestroy(SeqList* ps);

//չʾ��������
void SeqListPrint(SeqList* ps);

//β��
void SeqListPushBack(SeqList* ps, SLDateType x);

//ͷ��
void SeqListPushFront(SeqList* ps, SLDateType x);

//ͷɾ
void SeqListPopFront(SeqList* ps);

//βɾ
void SeqListPopBack(SeqList* ps);

// ˳������
int SeqListFind(SeqList* ps, SLDateType x);

// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x);

// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* ps, size_t pos);

void SLModify(SeqList* psl, size_t pos, SLDateType x);

//����posλ�õ�ֵ
SLDateType SeqListPosFind(SeqList* ps, size_t pos);


void FILE_READ_B(SeqList* pc);


void FILE_READ_A(SeqList* pc);

