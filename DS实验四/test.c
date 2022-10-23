#define _CRT_SECURE_NO_WARNINGS

#include"BinaryTree.h"


void test1(BTNode* root)
{
	BinaryTreePrevOrder(root);
	printf("\n");
	BinaryTreeInOrder(root);
	printf("\n");
	BinaryTreePostOrder(root);
	printf("\n");

	printf("%d\n", BinaryTreeSize(root));
	printf("%d\n", BinaryTreeLeafSize(root));
	printf("%d\n", BinaryTreeLevelKSize(root, 3));
	printf("%d\n", BinaryTreeHeight(root));
	printf("%p\n", BinaryTreeFind(root, 'Q'));

	BinaryTreeLevelOrder(root);
	printf("\n");

	printf("%d\n", BinaryTreeComplete(root));

}

void test()
{
	//BTNode* n1 = (BTNode*)malloc(sizeof(BTNode));
	//assert(n1);
	//BTNode* n2 = (BTNode*)malloc(sizeof(BTNode));
	//assert(n2);
	//BTNode* n3 = (BTNode*)malloc(sizeof(BTNode));
	//assert(n3);
	//BTNode* n4 = (BTNode*)malloc(sizeof(BTNode));
	//assert(n4);
	//BTNode* n5 = (BTNode*)malloc(sizeof(BTNode));
	//assert(n5);
	//BTNode* n6 = (BTNode*)malloc(sizeof(BTNode));
	//assert(n6);

	//n1->_data = 'A';
	//n2->_data = 'B';
	//n3->_data = 'C';
	//n4->_data = 'D';
	//n5->_data = 'E';
	//n6->_data = 'F';

	//n1->_left = n2;
	//n1->_right = n3;

	//n2->_left = n4;
	//n2->_right = NULL;

	//n4->_left = n4->_right = NULL;

	//n3->_left = n5;
	//n3->_right = n6;

	//n5->_left = n5->_right = NULL;
	//n6->_left = n6->_right = NULL;

	////BTNode* n7 = (BTNode*)malloc(sizeof(BTNode));
	////assert(n7);
	////n4->_right = n7;
	////n7->_left = n7->_right = NULL;
	////n7->_data = 'Q';

	//BTNode* n7 = (BTNode*)malloc(sizeof(BTNode));
	//assert(n7);
	//n2->_right = n7;
	//n7->_left = n7->_right = NULL;
	//n7->_data = 'Q';


	BTDataType a[] = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode* root = BinaryTreeCreate(a, 18, &i);

	

	test1(root);


	BinaryTreeDestory(&root);

	//free(n1);
	//free(n2);
	//free(n3);
	//free(n4);
	//free(n5);
	//free(n6);
}


int main()
{
	test();

	return 0;
}


