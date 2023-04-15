#include<stdio.h>
#include"SList.h"
#include<stdlib.h>
void SListprint(SLTNode* phead)
{	
	SLTNode* tem=phead;
	while(tem!=NULL)
	{
		printf("%d",tem->date);
		tem=tem->next;
	}
}
SLTNode* BuyList(int x){
	SLTNode* newnode=(SLTNode*)malloc(sizeof(SLTNode));
	newnode->next=NULL;
	newnode->date=x;
	return newnode;
}
void SListpushback(SLTNode** phead,SLDateType x)
{
	SLTNode* newnode=(SLTNode*)malloc(sizeof(SLTNode));
	newnode->date=x;
	newnode->next=NULL;

	if(*phead==NULL)
	{
		*phead=newnode;
	}
	else
	{
		SLTNode* tail=*phead;
		while(tail->next!=NULL)
		{
			tail=tail->next;
		}
		tail->next=newnode;
	}
	

}
void SListpushfront(SLTNode** phead,SLDateType x)
{
	SLTNode* newnode=(SLTNode*)malloc(sizeof(SLTNode));
	newnode->date=x;
	newnode->next=*phead;
	*phead=newnode;
}
void SListPopback(SLTNode** phead)
{
	if((*phead)==NULL)
	{
		return;
	}
	if((*phead)->next==NULL)
	{
		free(*phead);
		*phead=NULL;
	}
	else
	{
		SLTNode*pre=NULL;
		SLTNode* tail=*phead;
		while(tail->next->next)
		{
			//prev=tail;
			tail=tail->next;
		}
		//pre->next=NULL;
		free(tail->next);
		tail->next=NULL;
	}
}
void SListPopfront(SLTNode** phead){
	if((*phead)==NULL)
	{
		return ;
	}
	else
	{	
		SLTNode* next=(*phead)->next;
		free(*phead);
		*phead=next;
	}


}
SLTNode* SListFind(SLTNode* phead,SLDateType x){
	SLTNode* cur=phead;
	while(cur)
	{
		if(cur->date==x)
		{
			return cur;
		}
		else
		{
			cur=cur->next;
		}
	
	}

	return NULL;

}
void SListInsert(SLTNode** phead,SLTNode* pos,SLDateType x){	
	SLTNode* newnode=(SLTNode*)malloc(sizeof(SLTNode));
	SLTNode* tail=*phead;
	newnode->date=x;
	newnode->next=NULL;
	if(*phead==pos)
	{
		*phead=newnode;
		newnode->next=pos;
	
	}
	while(tail->next!=pos)
	{
		tail=tail->next;	
	}
	tail->next=newnode;
	newnode->next=pos;

}
SLTNode* removeElements(SLTNode* phead,int val){
	SLTNode* cur=phead;
	SLTNode* pre=phead;
	while(cur)
	{
		if(cur->date==val)
		{
			if(cur==phead)
			{
				phead=cur->next;
				free(cur);
				cur=phead;
			}
			else
			{
			pre->next=cur->next;
			free(cur);
			cur=pre->next;
			}
		}
		else
		{				
			pre=cur;
			cur=cur->next;	
		}
	
	
	}

	return phead;
}
void SListInsertAfter(SLTNode* pos,SLDateType x){
	SLTNode* newnode=BuyList(x);
	newnode->next=pos->next;
	pos->next=newnode;
	



}
void SListEase(SLTNode** phead,SLTNode* pos){
	SLTNode* pre=*phead;
	if(pos==*phead)
	{
		*phead=pos->next;
		free(pos);
	}
	else
	{
		while(pre->next!=pos)
		{
			pre=pre->next;	
		}
		pre->next=pos->next;
		free(pos);
	}
}
void SListDestory(SLTNode** phead){
	SLTNode* cur=*phead;
	while(cur!=NULL)
	{
		
		SLTNode* tail=cur->next;
		free(cur);
		cur=tail;
	}
	*phead=NULL;

}
SLTNode* reverseList(SLTNode* head){
	SLTNode* cur=head;
    SLTNode* next=head->next;
    if(head==NULL)
        {
            return NULL;
        }
    
	cur->next=NULL;
    while(next)
    {
		SLTNode* tem=next->next;
        next->next=cur;
		cur=next;
		next=tem;
    }
    return cur;
}
