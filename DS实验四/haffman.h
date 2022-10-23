#pragma once

#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define MAXVALUE 32767		//����ֵ�൱�������
#define NODENUM  5			//Ҷ�ӽ����


typedef struct
{
	char data;				//������
	int weight;				//����Ȩֵ
	int parent, lch, rch;	//˫���뺢�ӵ��±�
}htNode, * huffmanTree;

typedef char** huffmanCode;	


int initHuffmanTree(huffmanTree& HT);								//��ʼ����������

void creatHuffmanTree(huffmanTree& HT, int n);						//������������

void createHuffmanCode(huffmanTree HT, huffmanCode& HC, int n);		//��д����������


