#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct node * nodeptr;
typedef struct node{
    int data;
    nodeptr next;
}node;
void print(nodeptr head){  //输出函数 全部
    nodeptr temp=head;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
nodeptr create(int n){       //创建链表
    int i;
    nodeptr p=NULL,q=NULL,head=NULL;
    for(i=0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        p=(struct node*)malloc(sizeof(struct node));
        p->data=temp;
        if(head==NULL){
            head=p;
        }
        else{
            q->next=p;
        }
        q=p;
    }
    return head;
}
nodeptr find_element(nodeptr head,int target){  //查找 按元素
    nodeptr temp=head;
    while(temp){
        if(temp->data==target){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;
}
nodeptr insert(int element,nodeptr head,int which){  //插入元素 要提供目的位置的元素数据 然后会插到此元素后
    nodeptr temp=head;                               //没有的话就返回NULL 插入成功就返回插入的元素的地址
    while(temp){
        if(temp->data==which){
            node *temp1;
            temp1=(struct node*)malloc(sizeof(struct node));
            temp1->data=element;
            temp1->next=temp->next;
            temp->next=temp1;
            return temp1;
        }
        temp=temp->next;
    }
    return NULL;
}
bool delete(nodeptr head,int target){      //返回是否删除成功
    nodeptr temp=head;
    while(temp){
        if(temp->next->data==target){
            temp->next=temp->next->next;
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
    //nodeptr head=create(10);
    //print(head);
    //print(head);
    //printf("%d",find_element(head, 5)->data);
    //insert(11, head, 7);
    //print(head);
    //delete(head, 5);
    //print(head);
    return 0;
}
