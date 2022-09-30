#define _CRT_SECURE_NO_WARNINGS

//#include"List.h"

#include"SeqList.h"

#include"Chain_Table.h"



//void BuildSL(SeqList* p)
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int data = 0;
//		scanf("%d", &data);
//		SeqListPushBack(p, data);
//	}
//}

int GetLen(SeqList* p)
{
	return p->size;
}

void SeqListInsertFront(SeqList* p, int pos, int data)
{
	SeqListInsert(p, pos - 1, data);
}

void SeqListEraseFront(SeqList* p, int pos)
{
	SeqListErase(p, pos - 1);
}

int Min(void* pa, void* pb)
{
	return (*(int*)pa > *(int*)pb);
}


SeqList* Merge(SeqList* pa, SeqList* pb)
{
	for (int i = 0; i < pb->size; i++)
	{
		SeqListPushBack(pa, pb->a[i]);
	}
	qsort(pa->a, pa->size, sizeof(SLDateType), Min);
	return pa;
}

//void testSL()
//{
//	SeqList a;
//	SeqList b;
//	SeqList* pa = &a;
//	SeqList* pb = &b;
//
//	SeqListInit(pa);
//	SeqListInit(pb);
//
//	//BuildSL(pa);
//	//BuildSL(pb);
//	//SeqListPushBack(pa, 3);
//	//SeqListPushBack(pa, 5);
//	//SeqListPushBack(pa, 8);
//	//SeqListPushBack(pa, 11);
//	//SeqListPushBack(pb, 2);
//	//SeqListPushBack(pb, 6);
//	//SeqListPushBack(pb, 8);
//	//SeqListPushBack(pb, 9);
//	//SeqListPushBack(pb, 11);
//	//SeqListPushBack(pb, 15);
//	//SeqListPushBack(pb, 20);
//
//	FILE_READ_A(pa);
//	FILE_READ_B(pb);
//
//
//
//	SeqListPrint(pa);
//	SeqListPrint(pb);
//
//	printf("Len A:%d\n", GetLen(pa));
//	printf("Len B:%d\n", GetLen(pb));
//
//	printf("%d\n", SeqListPosFind(pa, 3));
//
//	SLModify(pb, 5, 14);
//	SeqListPrint(pb);
//
//	SeqListInsertFront(pa, 3, 6);
//	SeqListPrint(pa);
//
//	SeqListEraseFront(pa, 4);
//	SeqListPrint(pa);
//
//	Merge(pa, pb);
//	SeqListPrint(pa);
//
//	SeqListDestroy(pa);
//	SeqListDestroy(pb);
//	pa = pb = NULL;
//}

void PrintAllB(SListNode* p)
{
	while (p)
	{
		printf("%s   %s   %.0lf\n", p->data.id, p->data.name, p->data.price);
		p = p->next;
	}
}

int Get_List_Len(SListNode* p)
{
	int len = 0;
	while (p)
	{
		len++;
		p = p->next;
	}
	return len;
}
void Print_B(SListNode* p)
{
	printf("%s   %s   %.0lf\n", p->data.id, p->data.name, p->data.price);
}

//void testFL()
//{
//	SListNode* pb = NULL;
//	FILE_RAED_BOOK(&pb);
//
//	PrintAllB(pb);
//
//	printf("Book Len:%d\n", Get_List_Len(pb));
//
//	Print_B(SListFind_i(pb, 3));
//	printf("\n");
//	printf("\n");
//
//	book new = { "0000000000000","宝宝巴士",20 };
//
//	//SListInsert_i(pb, new, 2);
//	//SListErase_i(&pb, 3);
//	//PrintAllB(pb);
//
//	SListModify_i(pb, new, 3);
//	Print_B(SListFind_i(pb, 3));
//
//	SListErase_i(&pb, 3);
//	Print_B(SListFind_i(pb, 3));
//	printf("\n");
//	PrintAllB(pb);
//
//
//	SListDestroy(&pb);
//}

void SL()
{
	SeqList a;
	SeqList b;
	SeqList* pa = &a;
	SeqList* pb = &b;

	SeqListInit(pa);
	SeqListInit(pb);

	FILE_READ_A(pa);
	FILE_READ_B(pb);

	printf("A:");
	SeqListPrint(pa);
	printf("B:");
	SeqListPrint(pb);

	printf("Len A:%d\n", GetLen(pa));
	printf("Len B:%d\n", GetLen(pb));

	printf("A第三个元素：");
	printf("%d\n", SeqListPosFind(pa, 3));

	printf("修改B第5个元素15为14：");
	SLModify(pb, 5, 14);
	SeqListPrint(pb);

	printf("A第3个位置前插入6：");
	SeqListInsertFront(pa, 3, 6);
	SeqListPrint(pa);

	printf("删除A第4个位置元素：");
	SeqListEraseFront(pa, 4);
	SeqListPrint(pa);

	printf("合并AB：");
	Merge(pa, pb);
	SeqListPrint(pa);

	SeqListDestroy(pa);
	SeqListDestroy(pb);
	pa = pb = NULL;
	printf("\n");
}

void FL()
{
	SListNode* pb = NULL;
	FILE_RAED_BOOK(&pb);

	book new = { "0","0",0 };


	int i = 0;
	
	int input = 0;
	do
	{
		printf("1.输出数据元素\n");
		printf("2.长度\n");
		printf("3.取出元素，输入位置\n");
		printf("4.修改元素，输入数据\n");
		printf("5.插入元素，输入数据\n");
		printf("6.删除元素，输入位置\n");
		printf("退出：0\n");
		scanf("%d", &input);
		switch (input)
		{
		default:
			printf("输入错误\n");
			break;
		case 1:
			PrintAllB(pb);
			break;
		case 2:
			printf("Book List Len:%d\n", Get_List_Len(pb));
			break;
		case 3:
			scanf("%d", &i);
			Print_B(SListFind_i(pb, i));
			break;
		case 4:
			scanf("%s%s%d", new.id, new.name, &(new.price));
			printf("输入位置：");
			scanf("%d", &i);
			SListModify_i(pb, new, i);
			break;
		case 5:
			scanf("%s%s%d", new.id, new.name, &(new.price));
			printf("输入位置：");
			scanf("%d", &i);
			SListInsert_i(pb, new, i);
			break;
		case 6:
			scanf("%d", &i);
			SListErase_i(&pb, i);
			break;
		case 0:
			printf("退出成功\n");
			break;
		}
		printf("\n");
	} while (input);

	SListDestroy(&pb);
	printf("\n");
}


int main()
{
	//testSL();
	//testFL();

	int input = 0;

	do
	{
		printf("实验一：1\n");
		printf("实验二：2\n");
		printf("退出：0\n");
		scanf("%d", &input);
		switch (input)
		{
		default:
			printf("输入错误\n");
			break;
		case 1:
			SL();
			break;
		case 2:
			FL();
			break;
		case 0:
			printf("退出成功\n");
			break;
		}
	} while (input);


	return 0;
}

