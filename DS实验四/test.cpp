#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

#include"common.h"

using namespace std;

#include"haffman.h"


void test1()
{
	char str[16] = "ABD##EF##G##C##";
	int i = 0;
	BTNode* root = BinaryTreeCreate(str, 16, &i);

	cout << BinaryTreeHeight(root) << endl;

	BinaryTreeInOrder(root);

}

void test2()
{
	huffmanTree HT;
	initHuffmanTree(HT);
	huffmanCode HC;

	creatHuffmanTree(HT, NODENUM);
	createHuffmanCode(HT, HC, NODENUM);


	for (int i = 1; i <= NODENUM; i++)		//±éÀúÊä³ö±àÂë
	{
		printf("%c:\t", HT[i].data);
		printf("%s\n", HC[i]);
	}
}


int main()
{
	//test1();
	test2();

	return 0;
}


