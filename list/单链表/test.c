#include<stdio.h>
#include"SList.h"
void TestSList1()
{
	 SLTNode* plist=NULL;
	 //SLTNode* pos;
	 int i=1;
	 SListpushback(&plist,5);
	 SListpushback(&plist,4);
	 SListpushback(&plist,3);
	 
	SListpushfront(&plist,2);
	SListpushfront(&plist,1);
	//SListPopback(&plist);
	//SListPopback(&plist);
	//SListprint(plist);
	//pos=SListFind(plist,2);
	
	/*while(pos)
	{
		printf("第%d个节点:%p->%d\n",i++,pos,pos->date);
		pos=SListFind(pos->next,2);
	
	}*/

}
void TestSList2()
{
	//SLTNode* pos;
	SLTNode* ps;
	SLTNode* plist=NULL;
	SListpushback(&plist,5);
	SListpushback(&plist,4);
	SListpushback(&plist,3);
	SListpushback(&plist,2);
	SListpushback(&plist,1);
	//pos=SListFind(plist,2);
	/*if(pos)
	{
		SListInsert(&plist,pos,3);
	}
	SListprint(plist);*/
	ps=removeElements(plist,5);
	SListprint(ps);
}
void TestSList3()
{
	SLTNode* plist=NULL;
	SListpushback(&plist,5);
	SListpushback(&plist,4);
	SListpushback(&plist,3);
	SListpushback(&plist,2);
	SListpushback(&plist,1);
	SListDestory(&plist);
	SListprint(plist);
}
void TestSList4()
{
	SLTNode* plist=NULL;
	SLTNode* newnode;
	SListpushback(&plist,5);
	SListpushback(&plist,4);
	SListpushback(&plist,3);
	SListpushback(&plist,2);
	SListpushback(&plist,1);
	newnode=reverseList(plist);
	SListprint(newnode);
}
int main()
{
	//TestSList1();
	//TestSList2();
	TestSList4();
	return 0;
}