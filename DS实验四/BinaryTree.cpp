#define _CRT_SECURE_NO_WARNINGS

//#include"BinaryTree.h"

#include"common.h"


// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	
	printf("%c ", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}

// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	BinaryTreeInOrder(root->_left);
	printf("%c ", root->_data);
	BinaryTreeInOrder(root->_right);
}

// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	BinaryTreePostOrder(root->_left);
	BinaryTreePostOrder(root->_right);
	printf("%c ", root->_data);
}


// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	return root == NULL ? 0 : BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}


// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
	return root == NULL ? 0 : (root->_left == NULL && root->_right == NULL) + BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}


// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	assert(k > 0);

	if (root == NULL)
	{
		return 0;
	}

	if (k == 1)
	{
		return 1;
	}

	//没到k层
	else
	{
		return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
	}
}

//高度
int BinaryTreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	return 1 + (BinaryTreeHeight(root->_left) > BinaryTreeHeight(root->_right) ? BinaryTreeHeight(root->_left) : BinaryTreeHeight(root->_right));
}

// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;


	if (root->_data == x)
		return root;

	BTNode* ret = BinaryTreeFind(root->_left, x);
	if (ret)
		return ret;

	ret = BinaryTreeFind(root->_right, x);
	if (ret)
		return ret;

	return NULL;
}


// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue Root;
	QueueInit(&Root);
	QueuePush(&Root, root);
	while (!QueueEmpty(&Root))
	{
		BTNode* Node = QueueFront(&Root);
		QueuePop(&Root);

		printf("%c ", Node->_data);

		if (Node->_left)
			QueuePush(&Root, Node->_left);

		if (Node->_right)
			QueuePush(&Root, Node->_right);
	}

	QueueDestroy(&Root);
}

// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root)
{
	Queue Root;
	QueueInit(&Root);
	QueuePush(&Root, root);
	while (!QueueEmpty(&Root))
	{
		BTNode* Node = QueueFront(&Root);
		QueuePop(&Root);

		if (Node == NULL)
			break;

		QueuePush(&Root, Node->_left);
		QueuePush(&Root, Node->_right);

	}

	while (!QueueEmpty(&Root))
	{
		BTNode* Node = QueueFront(&Root);
		QueuePop(&Root);

		if (Node != NULL)
		{
			QueueDestroy(&Root);
			return 0;
		}

	}

	QueueDestroy(&Root);
	return 1;
}



// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (a[*pi] == '#' || *pi >= n)
	{
		(*pi)++;
		return NULL;
	}

	BTNode* root = (BTNode*)malloc(sizeof(BTNode));
	if (root == NULL)
	{
		perror("malloc failed");
		exit(-1);
	}

	root->_data = a[*pi];
	(*pi)++;
	root->_left = BinaryTreeCreate(a, n, pi);
	root->_right = BinaryTreeCreate(a, n, pi);


	return root;
}


// 二叉树销毁
void BinaryTreeDestory(BTNode** root)
{
	if (*root == NULL)
		return;

	BinaryTreeDestory(&((*root)->_left));
	BinaryTreeDestory(&((*root)->_right));
	free(*root);
	*root = NULL;
}




