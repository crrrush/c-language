#pragma once

#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define MAXVALUE 32767		//极大值相当于无穷大
#define NODENUM  5			//叶子结点数


typedef struct
{
	char data;				//数据域
	int weight;				//结点的权值
	int parent, lch, rch;	//双亲与孩子的下标
}htNode, * huffmanTree;

typedef char** huffmanCode;	


int initHuffmanTree(huffmanTree& HT);								//初始化哈夫曼树

void creatHuffmanTree(huffmanTree& HT, int n);						//构建哈夫曼树

void createHuffmanCode(huffmanTree HT, huffmanCode& HC, int n);		//编写哈夫曼编码


