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
//	book new = { "0000000000000","������ʿ",20 };
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

	printf("A������Ԫ�أ�");
	printf("%d\n", SeqListPosFind(pa, 3));

	printf("�޸�B��5��Ԫ��15Ϊ14��");
	SLModify(pb, 5, 14);
	SeqListPrint(pb);

	printf("A��3��λ��ǰ����6��");
	SeqListInsertFront(pa, 3, 6);
	SeqListPrint(pa);

	printf("ɾ��A��4��λ��Ԫ�أ�");
	SeqListEraseFront(pa, 4);
	SeqListPrint(pa);

	printf("�ϲ�AB��");
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
		printf("1.�������Ԫ��\n");
		printf("2.����\n");
		printf("3.ȡ��Ԫ�أ�����λ��\n");
		printf("4.�޸�Ԫ�أ���������\n");
		printf("5.����Ԫ�أ���������\n");
		printf("6.ɾ��Ԫ�أ�����λ��\n");
		printf("�˳���0\n");
		scanf("%d", &input);
		switch (input)
		{
		default:
			printf("�������\n");
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
			printf("����λ�ã�");
			scanf("%d", &i);
			SListModify_i(pb, new, i);
			break;
		case 5:
			scanf("%s%s%d", new.id, new.name, &(new.price));
			printf("����λ�ã�");
			scanf("%d", &i);
			SListInsert_i(pb, new, i);
			break;
		case 6:
			scanf("%d", &i);
			SListErase_i(&pb, i);
			break;
		case 0:
			printf("�˳��ɹ�\n");
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
		printf("ʵ��һ��1\n");
		printf("ʵ�����2\n");
		printf("�˳���0\n");
		scanf("%d", &input);
		switch (input)
		{
		default:
			printf("�������\n");
			break;
		case 1:
			SL();
			break;
		case 2:
			FL();
			break;
		case 0:
			printf("�˳��ɹ�\n");
			break;
		}
	} while (input);


	return 0;
}

