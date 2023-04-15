#pragma once
#include<stdio.h>
typedef int SLDateType;
typedef struct SListNode
{
	SLDateType date;
	struct	SListNode* next;
}SLTNode;
void SListprint(SLTNode* phead);
SLTNode* BuyList(int x);
void SListpushback(SLTNode** phead,SLDateType x);
void SListpushfront(SLTNode** phead,SLDateType x);
void SListPopback(SLTNode** phead);
void SListPopfront(SLTNode** phead);
SLTNode* SListFind(SLTNode* phead,SLDateType x);
void SListInsert(SLTNode** phead,SLTNode* pos,SLDateType x)	;
void SListInsertAfter(SLTNode* pos,SLDateType x);
void SListEase(SLTNode** phead,SLTNode* pos);
void SListDestory(SLTNode** phead);
SLTNode* removeElements(SLTNode* phead,int x);
SLTNode* reverseList(SLTNode* head);