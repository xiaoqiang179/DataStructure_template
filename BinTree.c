#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
	ElementType Data;
	BinTree Left;
	BinTree Right;
};

BinTree CreatBinTree(){
	BinTree BT[9];
	int i;
	for(i=0;i<9;i++) {
		BT[i]=(BinTree)malloc(sizeof(struct TNode));
		BT[i]->Data=(char)(65+i);
	}
	BT[0]->Left=BT[1];
	BT[0]->Right=BT[2];
		BT[1]->Left=BT[3];
	BT[1]->Right=BT[5];
		BT[2]->Left=BT[6];
	BT[2]->Right=BT[8];
		BT[3]->Left=NULL;
	BT[3]->Right=NULL;
		BT[4]->Left=NULL;
	BT[4]->Right=NULL;
		BT[5]->Left=BT[4];
	BT[5]->Right=NULL;
		BT[6]->Left=NULL;
	BT[6]->Right=BT[7];
		BT[7]->Left=NULL;
	BT[7]->Right=NULL;
		BT[8]->Left=NULL;
	BT[8]->Right=NULL;
	return BT[0];
}
void PrintGraph(BinTree BT);
void InorderTraversal( BinTree BT );
void PreorderTraversal( BinTree BT );
void PostorderTraversal( BinTree BT );
void LevelorderTraversal( BinTree BT );
void PreorderPrintLeaves( BinTree BT );
int GetHeight( BinTree BT );
int main()
{
	BinTree BT = CreatBinTree();
	printf("Inorder:");    InorderTraversal(BT);    printf("\n");
	printf("Preorder:");   PreorderTraversal(BT);   printf("\n");
	printf("Postorder:");  PostorderTraversal(BT);  printf("\n");
	printf("Levelorder:"); LevelorderTraversal(BT); printf("\n");
	printf("Height: %d\n",GetHeight(BT));
	PreorderPrintLeaves(BT);
	return 0;
}
/* 你的代码将被嵌在这里 */
void InorderTraversal( BinTree BT ){
	if(BT!=NULL){
		InorderTraversal(BT->Left);
		printf(" %c",BT->Data);
		InorderTraversal(BT->Right);
	}
}
void PreorderTraversal( BinTree BT ){
	if(BT!=NULL){
		printf(" %c",BT->Data);
		PreorderTraversal(BT->Left);
		PreorderTraversal(BT->Right);
	}
}
void PostorderTraversal( BinTree BT ){
	if(BT!=NULL){
		PostorderTraversal(BT->Left);
		PostorderTraversal(BT->Right);
		printf(" %c",BT->Data);
	}
}
void LevelorderTraversal( BinTree BT ){
	if(BT==NULL){
		return;
	}
	int head=0,tail=0;
	BinTree queue[1000];
	queue[tail]=BT;
	tail++;
	while(head!=tail){
		printf(" %c",queue[head]->Data);
		if(queue[head]->Left!=NULL){
			queue[tail++]=queue[head]->Left;
		}
		if(queue[head]->Right!=NULL){
			queue[tail++]=queue[head]->Right;
		}
		head++;
	}
}
int GetHeight( BinTree BT ){
	if(BT==NULL){
		return 0;
	}
	int ls=GetHeight(BT->Left);
	int rs=GetHeight(BT->Right);
	return ls>rs ? ls+1:rs+1;
}
void PreorderPrintLeaves( BinTree BT ){
	if(BT==NULL){
		return;
	}
	if(BT->Left==NULL&&BT->Right==NULL){
		printf(" %c",BT->Data);
	}
	PreorderPrintLeaves(BT->Left);
	PreorderPrintLeaves(BT->Right);
}

void PrintGraph(BinTree BT){
	if(BT==NULL){
		return;
	}
	BinTree queue[1000]={NULL};
	int head=0,tail=0;
	while(head<tail){
		queue[tail++]=
	}
}
/*
       1
	  / \
	 2   3
	/ \  / \
   4  5  6  7
  / \   / \   / \   / \
 8   9 10 11 12 13 14 15
*/